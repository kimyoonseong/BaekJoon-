#include <bits/stdc++.h>
using namespace std;
 
vector<int> v[10001];
int dp[10001], mx, visited[10001], n, m, a, b;

int dfs(int i){
	visited[i] = 1;
	int cnt=1;
	for(int j: v[i]){
		if(visited[j]) continue;
		cnt+=dfs(j);
		
	}
	return cnt;	
}

int main() { 

	cin >> n >> m;  
	while (m--) {
     	cin >> a >> b;  
	    v[b].push_back(a);
	} 
	for (int i = 1; i <= n; i++) {
		memset(visited, 0, sizeof(visited));
		dp[i] = dfs(i); 
		mx = max(dp[i], mx);
	} 
	for (int i = 1; i <= n; i++) if (mx == dp[i]) cout << i << " "; 
	return 0;
}