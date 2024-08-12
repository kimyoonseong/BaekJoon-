#include <bits/stdc++.h>
using namespace std;
int n,a[1000004],ret[1000004];
int main(){
	cin>>n;
	stack <int> st;
	
	memset(ret,-1,sizeof(ret));
	for(int i=0; i<n; i++){
		cin>>a[i];
		while(st.size()&&a[st.top()]<a[i]){
			ret[st.top()]=a[i]; st.pop();
		}
		st.push(i);
	}
	for(int i=0; i<n; i++) cout<<ret[i]<<" ";
	return 0;
}