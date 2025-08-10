#include <bits/stdc++.h>
using namespace std;
int n;
int dy[4]={1,0,-1,0};
int dx[4]={0,1,0,-1};
int a[104][104];
int visited[104][104];
void bfs(int sy, int sx, bool blind) {
    queue<pair<int,int>> q;
    q.push({sy, sx});
    visited[sy][sx] = true;
    char startColor = a[sy][sx];

    while (!q.empty()) {
        int y, x;
        tie(y, x) = q.front();
        q.pop();
         for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if (visited[ny][nx]) continue;
        	if (blind) {
                // 적록색약: R과 G는 같은 색
	                if ((startColor == 'R' || startColor == 'G') &&
	                    (a[ny][nx] == 'R' || a[ny][nx] == 'G')) {
	                    visited[ny][nx] = true;
	                    q.push({ny, nx});
	                } else if (a[ny][nx] == startColor) {
	                    visited[ny][nx] = true;
	                    q.push({ny, nx});
	                }
	        }
            else{
				if(a[ny][nx]==startColor){
					visited[ny][nx]=true;
					q.push({ny, nx});	
				}
			}
                
    	}
    }
        
        
}

int main() {
	
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
	    
	int sec_answer=0, answer=0;//색맹 구역수, 비색맹 구역수 
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        for (int j = 0; j < n; j++) {
            a[i][j] = s[j];
        }
    }

    // 일반
    memset(visited, false, sizeof(visited));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                bfs(i, j, false);
                answer++;
            }
        }
    }

    // 색약
    memset(visited, false, sizeof(visited));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                bfs(i, j, true);
                sec_answer++;
            }
        }
    }

    cout << answer << " " << sec_answer << "\n";
    return 0;
}