#include <bits/stdc++.h>
using namespace std;
vector<int> graph[100001];
int result[100001]; int cnt = 0;
int visited[1000001];
void dfs(int r){
	if(visited[r]==1){
		return ;
	}
	visited[r]=1;
	cnt++; 
	result[r] = cnt;
	for(auto it: graph[r]){
		dfs(it);	
	}
	
}
int main(){
	
	int n,m,r;
	scanf("%d %d %d", &n,&m,&r);

	for(int i =0; i<m; i++){
		int a, b;
		scanf("%d %d", &a,&b);
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	for(int i=1; i<=n; i++){
		sort(graph[i].begin(), graph[i].end(), greater<int>());	
	}
	dfs(r);
	
	for (int i = 1; i <=n; i++) {
	 printf("%d\n", result[i]);
	  }
	return 0;
}