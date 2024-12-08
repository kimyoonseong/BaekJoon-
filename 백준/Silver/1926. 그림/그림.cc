#include <bits/stdc++.h>
using namespace std;
int dy[]={-1,0,1,0};
int dx[]={0,1,0,-1};
int a[504][504], visited[504][504];
int ret=0, cnt=0;
int n,m;
int dfs(int y, int x){
		int area = 1; 
		for(int i=0; i<4; i++){
			int ny=y+dy[i];
			int nx=x+dx[i];
			if(ny<0|| ny>=n || nx<0||nx>=m) continue;
			if(visited[ny][nx]||a[ny][nx]==0) continue;
				//q.push({ny,nx});
				visited[ny][nx]=1;
				//cout<<"visited[y][x]: "<<visited[y][x]+1<<endl;
				 area += dfs(ny, nx);
		}
	
	return area;
}
int main(){
	
	cin>>n>>m;	
	fill(&visited[0][0], &visited[0][0]+504*504, 0);
	//fill(&a[0][0], &a[0][0]+504*504, 0);
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
		}
	}

	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i][j]==1&& visited[i][j]==0){
//				cout<<"-------------------";
//				cout<<endl;
				visited[i][j]=1;
				ret = max(ret, dfs(i, j));
				cnt++;
//				for(int k=0; k<n; k++) {
//					for(int h=0; h<m; h++){
//						cout<<visited[k][h]	<<" ";	
//					}
//					cout<<endl;
//				}
								
			}
		}
	}	
	cout<<cnt<<endl;
//	for(int i=0; i<n; i++){
//		for(int j=0; j<m; j++){
//			ret=max(ret,visited[i][j]);
//		}
//	}
	cout<<ret;
	return 0;
}