#include <bits/stdc++.h>
using namespace std;
int a[104][104], m, n, k, x1, x2, y11, y21, visited[104][104];
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
vector<int> ret; 
int dfs(int y, int x){
	visited[y][x]=1;
	int cnt=1;
	for(int i=0; i<4; i++){
		int ny= y+dy[i];
		int nx= x+dx[i];
		if(ny<0||nx<0||ny>=m||nx>=n||a[ny][nx]==1) continue;
		if(visited[ny][nx]==1) continue;
		cnt+= dfs(ny,nx);	
	}
	return cnt;	
}
int main() { 
  
    cin >> m >> n >> k; 
    for(int i = 0; i < k; i++){
        cin >> x1 >> y11 >> x2 >> y21;  
        for(int x = x1; x < x2; x++){
            for(int y = y11; y < y21; y++){
                a[y][x] = 1; 
            }
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] != 1 & visited[i][j] == 0) { 
                ret.push_back(dfs(i, j));
               
            }
        }
    }
    sort(ret.begin(), ret.end());
    cout << ret.size() << "\n";
    for(int a : ret) cout << a << " "; 
    return 0; 
}