#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
int dy[4]={0,1,0,-1};
int dx[4]={-1,0,1,0};
int arr[104][104];
int visited[101][101];
void dfs(int y, int x,int k){
	visited[y][x]=1;

	for(int i=0; i<4; i++){
		int ny= y+dy[i];
		int nx= x+dx[i];
		
		if(ny<0|| ny>=n||nx<0||ny>=n) continue;
		if(visited[ny][nx]==0 &&arr[ny][nx]>k) {
			dfs(ny,nx,k);
		}
	}
	
}
int main(){
	cin>>n;
	int max=1;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>arr[i][j];	
		}
	}
	
	for(int k=1; k<=100; k++){
		fill(&visited[0][0], &visited[0][0] + 101 *101, 0);
		int cnt=0;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(arr[i][j]>k && !visited[i][j] ){
					//cout<<"k: "<<k<<"cnt"<<cnt<<endl;
					dfs(i,j,k);
//					for(int o=0; o<n; o++){
//						for(int u=0; u<n; u++){
//						cout<<visited[o][u];	
//						}
//					cout<<endl;
//					
//					}
					cnt++;
				}
				
			}
		}
//		cout<<cnt<<endl;
		if(cnt>=max) max=cnt;		

	}
	cout<<max;
	return 0;	
}