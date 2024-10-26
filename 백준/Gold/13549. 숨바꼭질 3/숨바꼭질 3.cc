#include <bits/stdc++.h>
using namespace std;
const int MAX = 200000; 
int visited[MAX+4];

int main(){
	int n,m;
	cin>>n>>m;
	visited[n] = 1;
    
    queue<int> q;
    q.push(n);
	while(!q.empty()){
		int now = q.front();
        q.pop();
        for (int next : {now-1, now+1, now*2}) {
        	if(0<=next &&next<=MAX){
        		if(!visited[next]){
        			if(next==now*2){      		      			
        				visited[next]=visited[now];
						q.push(next);	
        			}
        			else{
        				visited[next]+=visited[now]+1;
						q.push(next);
					
					}
				}
				else{
					if(next==now*2){      	
						if(visited[next]>visited[now]){	      			
        					visited[next]=visited[now];
							q.push(next);	
						}
        			}
        			else{
        				if(visited[next]>visited[now]){
        					visited[next]=visited[now]+1;
        					q.push(next);
        				}
					
					
					}	
				}
				
        	}	
        }
    }
    cout<<visited[m]-1;
 	return 0;   
}