#include <bits/stdc++.h>
#include<algorithm>
#include<queue>
using namespace std; 
char a[301][301];
int n, m, x11, y11, x22, y22; 
typedef pair<int, int> pii;
int visited[301][301];
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int ret; 
queue<pair<int,int>> q;
int main(){
	cin>>n>>m;
	cin>>y11>>x11>>y22>>x22;
//    scanf("%d %d", &n, &m);
//    scanf("%d %d %d %d", &y1, &x1, &y2, &x2);
    y11--, x11--, y22--, x22--; 
    for(int i = 0; i < n; i++){
       for(int j=0; j<m; j++){
       		cin>>a[i][j];
       }
    }  
    q.push({y11,x11});
    visited[y11][x11] = 1; 
    int cnt = 0; 
    while(a[y22][x22] != '0'){ 
        cnt++;
        queue<pair<int,int>> temp; 
        while(q.size()){
        	int y,x; 
        	tie(y,x)=q.front();
           q.pop();  
            for(int i = 0; i < 4; i++){
                int ny = y + dy[i]; 
                int nx = x + dx[i];
    			if(ny < 0 || ny >= n || nx < 0 || nx >= m || visited[ny][nx]) continue; 
    			visited[ny][nx] = cnt;  
                if(a[ny][nx] != '0'){//여파 지역 
                    a[ny][nx] = '0'; 
                    temp.push({ny,nx}); 
                }
    			else q.push({ny,nx}); //
     		}
        }
        q = temp;  
    }
    cout<< visited[y22][x22]; 
}