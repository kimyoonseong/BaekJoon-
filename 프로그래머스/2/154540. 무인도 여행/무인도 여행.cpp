#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int visited[104][104];
int   y, x,n,m; 
char a[100][100];

vector<int> solution(vector<string> maps) {
    vector<int> answer;
    int n=maps.size();
    int m= maps[0].size();
    queue<pair<int, int>> q;  
    for(int i=0; i<maps.size(); i++){
        for(int j=0; j<maps[i].size(); j++){
          a[i][j]=maps[i][j];    
        }
    }
    fill(&visited[0][0], &visited[0][0] + 104 * 104, 0);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
                if(a[i][j] != 'X' && visited[i][j]==0){   
                    int sum = 0;
                    visited[i][j] = 1;
                    q.push({i, j}); 
                    sum += a[i][j] - '0';

                    while(q.size()){
                        tie(y, x) = q.front(); q.pop(); 
                        for(int k = 0; k < 4; k++){
                            int ny = y + dy[k]; 
                            int nx = x + dx[k]; 
                            if(ny < 0 || ny >= n || nx < 0 || nx >= m || a[ny][nx] == 'X') continue; 
                            if(visited[ny][nx]||a[ny][nx]=='X') continue; 
                            visited[ny][nx] = 1;
                            sum += a[ny][nx] - '0';
                            q.push({ny, nx}); 
                        } 
                    }
                     answer.push_back(sum);
                }
        }
    }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cout<<visited[i][j]<<',';
    //     }
    //     cout<<endl;
    // }
    
    if(answer.size()==0) answer.push_back(-1);
    sort(answer.begin(), answer.end());    
    return answer;
}