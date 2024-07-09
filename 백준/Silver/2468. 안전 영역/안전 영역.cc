#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[101][101], e[101][101], visited[101][101], n, temp, ret = 1;
int dy[4] = {-1, 0, 1, 0}, dx[4] = {0, 1, 0, -1};
void dfs(int y, int x,int k){
	visited[y][x]=1;

	for(int i=0; i<4; i++){
		int ny= y+dy[i];
		int nx= x+dx[i];
		
		if(ny<0|| ny>=n||nx<0||nx>=n) continue;
		if(!visited[ny][nx] &&a[ny][nx]>k) {
			dfs(ny,nx,k);
		}
	}
	
}
int main(){
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);   
	cin>>n;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];	
		}
	}
	
	for(int k=1; k<101; k++){
		fill(&visited[0][0], &visited[0][0] + 101 * 101, 0); 
        int cnt = 0;  
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(a[i][j]>k && !visited[i][j] ){
					dfs(i,j,k);
					cnt++;
				}
				
			}
		}	
		ret=max(ret,cnt);
	}
	cout<<ret<<endl;
	return 0;	
}