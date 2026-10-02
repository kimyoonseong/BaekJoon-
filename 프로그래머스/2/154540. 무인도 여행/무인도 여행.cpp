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
    fill(&visited[0][0],&visited[0][0]+104*104,0);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
                if(a[i][j] != 'X' && visited[i][j]==0){   
                     
                    q.push({i,j});
                    int tmp=a[i][j]-'0'; //덩어리~ 
                    while(!q.empty()){
                        tie(y, x) = q.front(); q.pop(); 
                        visited[y][x]=1;
                        for(int k=0; k<4; k++){
                            int ny= y+dy[k];
                            int nx= x+dx[k];
                            
                            if(ny<0||ny>=n||nx<0||nx>=m) continue;
                            if(visited[ny][nx]||a[ny][nx]=='X') continue;
                            q.push({ny,nx});  
                            visited[ny][nx]=1;
                            tmp+=a[ny][nx]-'0';
                        }                        
                    }
                    answer.push_back(tmp);
                }
        }
    }
    if(answer.size()==0){
        answer.push_back(-1);
    }
    sort(answer.begin(), answer.end());
    
        
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cout<<visited[i][j]<<',';
    //     }
    //     cout<<endl;
    // }
    
    return answer;
}