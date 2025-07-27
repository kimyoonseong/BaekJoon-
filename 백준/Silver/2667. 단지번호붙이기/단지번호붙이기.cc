#include<bits/stdc++.h>
#include <iostream>
using namespace std;   
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int a[30][30], visited[30][30] , y, x;
int result=0;
vector<int> res;
int main(){
		int n;
		cin>>n;
		for (int i = 0; i < n; i++) {
			    string s;
			    cin >> s; 
			    for (int j = 0; j < n; j++) {
			        a[i][j] = s[j] - '0'; 
			    }
			}

		
		queue<pair<int, int>>q;
		for(int i=0; i<n; i++){
		    for(int j=0; j<n; j++){
		    	//cout << "BFS 시작점: " << i << ", " << j << endl;
		        if(a[i][j] == 1 && visited[i][j]==0){
		        	 
		            q.push({i,j});
		            visited[i][j] = 1; // 1일차부터 시작 (편의상)
		            	// 2. BFS
		            	int cnt = 1; // 처음 1도 포함
						while(!q.empty()){
						    tie(y,x) = q.front(); q.pop();
						      //cout << "  방문 중: " << y << ", " << x << endl;
							for(int k=0; k<4; k++){
						        int ny = y + dy[k];
						        int nx = x + dx[k];
						        if(nx<0 || nx>=n || ny<0 || ny>=n) continue;
						        
						        if(a[ny][nx]==1 && visited[ny][nx]==0){
						            visited[ny][nx] = visited[y][x] + 1;
						            q.push({ny, nx});
						            cnt++;
						        }
						        
						    }
						}
						
					 res.push_back(cnt); 	
		        }
		       
		    }
		}
	
		
	
	sort(res.begin(), res.end() );
	cout<<res.size()<<endl;
	for(auto it: res){
		cout<<it<<endl;	
	}
	return 0;
	
}