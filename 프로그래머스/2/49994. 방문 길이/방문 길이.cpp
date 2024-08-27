#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};

int solution(string dirs) {
    int answer = 0;
    bool visited[11][11][4]; 
    memset(visited, false, sizeof(visited));
    
    int x = 5; 
    int y = 5; 
    
    for(int i=0; i<dirs.size(); i++){
        int dir = 0;
        char a = dirs[i];
        if(a == 'L'){ //오른쪽 check
            dir = 0;//2
        } else if(a == 'U'){//아래 check
            dir = 1;//3
        } else if(a == 'R'){//왼쪽 check
            dir = 2;//0
        } else {
            dir = 3;
        }
        
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        
        if(nx < 0 || ny < 0 || nx >= 11 || ny >= 11) continue;
        int countdir = (dir + 2) % 4; 
        if(!visited[x][y][dir] && !visited[nx][ny][countdir]){//출발점 출발방향 && 도착점 오는방향 x
            visited[x][y][dir] = true;
            visited[nx][ny][countdir] = true;
            answer++;
        }
        x = nx;
        y = ny;
    }
    
    return answer;
}