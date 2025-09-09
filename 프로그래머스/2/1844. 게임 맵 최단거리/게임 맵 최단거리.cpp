#include<vector>
#include <bits/stdc++.h>
using namespace std;
int visited[104][104];
int dy[]={0,1,0,-1};
int dx[]={1,0,-1,0};
int x,y;
int solution(vector<vector<int> > maps)
{
    queue <pair<int,int>> q;
    q.push({0,0});
    int answer = 0;

    while(!q.empty()){
        tie(y,x)=q.front();
        q.pop();
        for(int i=0; i<4; i++){
            int ny=y+dy[i];    
            int nx=x+dx[i];
            if(ny<0||ny>=maps.size()||nx<0||nx>=maps[0].size()) continue;
            if(visited[ny][nx]||maps[ny][nx]==0) continue;
            q.push({ny,nx});
            visited[ny][nx]=visited[y][x]+1;
        }
        
    }
    int y=maps.size()-1;
    int x=maps[0].size()-1;
    if(visited[y][x]==0){
        answer=-1;
        return answer;
    }
    answer=visited[y][x]+1;
    return answer;
}