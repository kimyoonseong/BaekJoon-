#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

#define MAX 99'999'999
using namespace std;

int solution(int n, int start, int a, int b, vector<vector<int>> fares) 
{
    vector<vector<int>> map(n+1, vector<int>(n+1, MAX));
    
    // 자기 자신으로 가는 요금은 0
    for(int i = 1; i <= n; ++i)
        map[i][i] = 0;
    
    // 요금 설정하기
    for(const auto& f : fares)
    {
        int n1 = f[0];
        int n2 = f[1];
        int dist = f[2];
        
        map[n1][n2] = dist;
        map[n2][n1] = dist;
    }
  
    // 모든 노드에서 다른 노드까지 최소 요금 구하기(플로이드 워셜)
    for(int k = 1; k <= n; ++k)
        for(int s = 1; s <= n; ++s)
            for(int d = 1; d <= n; ++d)
                map[s][d] = min(map[s][d], map[s][k] + map[k][d]);
    
    
    // 최소 요금 찾기
    int answer = MAX;
    for(int k = 1; k <= n; ++k)
    {
       answer = min(answer, map[start][k] + map[k][a] + map[k][b]); // 시작 지점 ~ 경우 지점 + 경우 지점 ~ A목표 + 경유 지점 ~ B목표
    }
     
     return answer;
}