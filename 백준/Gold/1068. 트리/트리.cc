#include <bits/stdc++.h>
using namespace std;
vector<int> adj[54];
int n, root,r;
int dfs(int i){
	int ret=0;
	int child=0;
	for(int there: adj[i]){
		if(there==r) continue;	
		ret+= dfs(there);
		child++;
	}
	if(child==0) return 1;
	return ret;
}
int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		int t;
		cin>>t;
		if(t==-1) root=i;
		else adj[t].push_back(i);
			
	}
	cin >> r;
    if(r == root){
        cout << 0 << "\n";return 0;
    }
    cout << dfs(root) << "\n";
	
	return 0;
	
}