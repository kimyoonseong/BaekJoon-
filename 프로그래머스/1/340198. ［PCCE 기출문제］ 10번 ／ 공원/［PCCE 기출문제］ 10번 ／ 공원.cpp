#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int dy[4] = {1,0,-1,0};
int dx[4] = {0,1,0,-1};

int solution(vector<int> mats, vector<vector<string>> park) {
    int n = (int)park.size();             // 세로
    int m = (int)park[0].size();          // 가로
    int max_size = 0;

    // dp[i][j] = (i,j)를 오른쪽-아래 끝으로 하는 "빈 칸 정사각형"의 최대 한 변 길이
    vector<vector<int>> dp(n, vector<int>(m, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (park[i][j] == "-1") { // 빈 칸
                if (i == 0 || j == 0) {
                    dp[i][j] = 1;
                } else {
                    dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
                }
                max_size = max(max_size, dp[i][j]);
            } else {
                dp[i][j] = 0;
            }
        }
    }

    // 매트 목록에서, max_size 이하인 가장 큰 값 선택
    sort(mats.begin(), mats.end(), greater<int>());
    for (int s : mats) {
        if (s <= max_size) return s;
    }
     return -1;
}