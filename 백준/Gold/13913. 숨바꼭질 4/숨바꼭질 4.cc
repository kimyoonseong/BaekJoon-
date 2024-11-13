#include <bits/stdc++.h>
#define prev aaa
#define next aaaa
using namespace std;
const int max_n=200004;
int n,m,here,ret;
int visited[max_n], prev[max_n];
vector<int> v;
int main(){
	cin>>n>>m;	
	visited[n]=1;
	queue<int> q;
	q.push(n);
	while(!q.empty()){
		here=q.front();
		q.pop();
		if(here == m){
            ret = visited[m]; 
            break;
        }
		for(int i: {here-1,here+1,here*2}){
			if(i<0||i>=max_n||visited[i]) continue;		
			visited[i]=visited[here]+1;
			prev[i]=here;
			q.push(i);
		}
		
	}
	for(int i=m; i!=n; i=prev[i]){
			v.push_back(i);
	}
	v.push_back(n);
	cout<<ret-1<<endl;
	reverse(v.begin(), v.end());
	for(int i:v) cout<<i<<" ";
	return 0;
}