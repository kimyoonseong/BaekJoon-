#include <bits/stdc++.h>
using namespace std;
int dy[4]={0,-1,0,1};
int dx[4]={1,0,-1,0};
int visited[104][104];
int n,m,x,y;
int arr[104][104];
int main(){
	  scanf("%d %d", &n, &m); 

//	for(int i=0; i<n; i++){ //개행문자 따로인식안함 
//		for(int j=0; j<m; j++){
//			cin>> a[i][j];
//		}
//	}
	for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%1d", &arr[i][j]);
        }
    } 

	queue<pair<int,int>> q;
	q.push({0,0});
	visited[0][0]=1;
	
	while(q.size()){
		tie(y,x)=q.front();	
		q.pop();
		for(int i=0;  i<4; i++){
			int ny=dy[i]+y;
			int nx=dx[i]+x;
			
			if(ny<0||nx<0|| ny>=n||nx>=m) continue;
			if(visited[ny][nx]|| arr[ny][nx]==0) continue;
			
			visited[ny][nx]=visited[y][x]+1;
			q.push({ny,nx});
		
			
		}
	}
		
	cout<<visited[n-1][m-1];
	return 0;
}