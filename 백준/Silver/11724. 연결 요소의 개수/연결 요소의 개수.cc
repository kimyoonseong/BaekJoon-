#include <iostream>
#include <vector>
using namespace std;
int n, m, answer=0;
bool visit[1002];
vector<int> result_dfs;
vector<int> vec[10002];
void DFS(int i){
	visit[i]=true;
	for(auto it: vec[i]){
		if(visit[it]) continue;
		DFS(it);
	}

}
int main(){
	int a,b;
	cin>>n>>m;

	for(int i=0 ; i< m; i++){
		cin >> a >> b;
        vec[a].push_back(b); //양방향 간선처리
        vec[b].push_back(a); //양방향 간선처리
	}

	for (int i = 1; i <= n; i++)
	{
		if (visit[i]) continue;
		DFS(i);
		answer++;
	}	
	cout<<answer;
	return 0;
	
}