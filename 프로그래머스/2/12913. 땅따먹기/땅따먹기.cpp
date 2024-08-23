#include <iostream>
#include <vector>
using namespace std;

int solution(vector<vector<int> > land)
{
    int answer = 0, size = land.size();
    vector<vector<int> > dp(size, vector<int>(4, 0));
    for (int i=0; i<4; i++) dp[0][i] = land[0][i];
    for (int i=1; i<size; i++) {
        for (int j=0; j<4; j++) {
            int prev_max = 0;
            for (int k=0; k<4; k++) {
                if (k == j) continue ;
                prev_max = max(prev_max, dp[i-1][k]);
            }
            dp[i][j] = prev_max + land[i][j];
        }
    }
    for (int i=0; i<4; i++) answer = max(answer, dp[size-1][i]);
    return answer;
}