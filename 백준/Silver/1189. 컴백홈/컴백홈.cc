#include<bits/stdc++.h>
using namespace std;
int visited[6][6];
char a[6][6];
int n,m,k;
int dy[]={-1,0,1,0};
int dx[]={0,1,0,-1};

//bool visited[6][6];
int dfs(int y,int x){
//	for(int i=0; i<n; i++){
//		for(int j=0; j<m; j++){
//			cout<<visited[i][j];		
//		}
//		cout<<endl;
//	}
//	cout<<endl;
	if(y == 0 && x == m - 1){
		if(k == visited[y][x]) return 1;
		return 0; 
	}
	int ret=0;
	for(int i=0; i<4; i++){
		int ny= y+dy[i];	
		int nx= x+dx[i];
		if(ny<0||ny>=n||nx<0||nx>=m||visited[ny][nx]||a[ny][nx] == 'T') continue;
		visited[ny][nx] = visited[y][x] + 1; 
		ret += dfs(ny, nx);
		//cout<<ret<<endl;
		visited[ny][nx] = 0;
	}
	return ret;
}
int main(){
	cin>>n>>m>>k;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];		
		}
	}
	fill(&visited[0][0],&visited[0][0]+6*6,0);
	visited[n-1][0]=1;
	cout<<dfs(n-1,0)<<endl;

	return 0;
}