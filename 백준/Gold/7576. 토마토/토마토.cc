#include<bits/stdc++.h>
#include <iostream>
using namespace std;   
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int a[1004][1004], visited[1004][1004] , y, x;
int result=0;
int main(){
		int n,m;
		cin>>m>>n;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin>>a[i][j];
				//cout<<a[i][j];		
			}
			//cout<<endl;
		}
		
		queue<pair<int, int>>q;
		for(int i=0; i<n; i++){
		    for(int j=0; j<m; j++){
		        if(a[i][j] == 1){
		            q.push({i,j});
		            visited[i][j] = 1; // 1일차부터 시작 (편의상)
		        }
		    }
		}
	
		
		// 2. BFS
		while(!q.empty()){
		    tie(y,x) = q.front(); q.pop();
		    for(int k=0; k<4; k++){
		        int ny = y + dy[k];
		        int nx = x + dx[k];
		        if(nx<0 || nx>=m || ny<0 || ny>=n) continue;
		        if(a[ny][nx]==0 && visited[ny][nx]==0){
		            visited[ny][nx] = visited[y][x] + 1;
		            q.push({ny, nx});
		        }
		    }
		}
//		for(int i=0; i<n; i++){
//			for(int j=0; j<m; j++){
//				cout<<visited[i][j]<<" ";
//			}
//			cout<<endl;
//		}
	for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(visited[i][j]==0&&a[i][j]==0){
					cout<<-1;
						return 0;
				}
				if(visited[i][j]>result){
					result=visited[i][j];	
				}	
			}
	} 	
	cout<<result-1;	
		
	
}
