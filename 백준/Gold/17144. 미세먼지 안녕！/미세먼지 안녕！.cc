#include <bits/stdc++.h>
using namespace std;

queue <pair <int, int>> q; 
int a[50][50]; 
int map_sum[50][50]; 
int m, n, time1; 
int dy[4] = { 0,0,-1,1 }; 
int dx[4] = { 1,-1,0,0 };
vector <pair<int, int>> lo;
void bfs() {
	int t = 0; 
	int r1_y, r1_x, r2_y, r2_x;
	r1_y = lo[0].first; 
	r1_x = lo[0].second; 
	r2_y = lo[1].first; 
	r2_x = lo[1].second; 	
	while (!q.empty()) {
		if (t == time1)return ; 
		int q_s = q.size(); 
		while (q_s--) {
			int y, x; 
			tie(y, x) = q.front(); 	 
			q.pop(); 
			int cnt = 0; 
			for (int i = 0; i < 4; i++) {
				int ny = dy[i] + y;
				int nx = dx[i] + x;
				if (ny < 0 || ny >= m || nx < 0 || nx >= n)continue;
				if (a[ny][nx] == -1)continue;
				cnt++;			
				map_sum[ny][nx] += (a[y][x] / 5);
			}
			if(cnt)	map_sum[y][x] += a[y][x] - ((a[y][x] / 5) * cnt); 
		}
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (a[i][j] == -1)a[i][j] = -1;
				else a[i][j] = map_sum[i][j];
				map_sum[i][j] = 0;
			}
		}	

		for (int i = lo[0].first - 1; i > 0; i--)a[i][0] = a[i - 1][0];	
		for (int i = 0; i < n - 1; i++)	a[0][i] = a[0][i + 1];	
		for (int i = 1; i <= lo[0].first; i++) a[i - 1][n - 1] = a[i][n - 1];
		for (int i = n - 1; i > 1; i--)a[lo[0].first][i] = a[lo[0].first][i - 1];
		a[lo[0].first][1] = 0;
		for (int i = lo[1].first + 1; i < m - 1; i++)a[i][0] = a[i + 1][0];
		for (int i = 0; i < n - 1; i++)	a[m - 1][i] = a[m - 1][i + 1];
		for (int i = m - 1; i >= lo[1].first; i--)a[i][n - 1] = a[i - 1][n - 1];
		for (int i = n - 1; i > 1; i--)	a[lo[1].first][i] = a[lo[1].first][i - 1];		
        a[lo[1].first][1] = 0;
		t++; 
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {	
				if (a[i][j] > 0)q.push({ i,j });
			}
		}
	}
}
int main() {
 
	cin >> m >> n >> time1; 	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j]; 
			if (a[i][j] == -1) {
			   lo.push_back({ i,j }); 
			}
			else if (a[i][j] > 0) {
				q.push({ i,j }); 
			}
		}
	}	
	bfs(); 
	int result = 0; 
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {		
			if (a[i][j] == -1)continue; 
			result += a[i][j];
		}
	}
	cout << result; 
}
