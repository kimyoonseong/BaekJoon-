#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n;
	cin>>n;
	for(int i=0; i< n; i++){
		string s;
		stack<int> st;
		cin>>s;
		for(int j=0; j<s.size(); j++){
			if(st.size()==0){
				if(s[j]==')'){
				  st.push(s[j]);
				  break;
				}
				st.push(s[j]);
				continue;
			}
			if(st.top()==s[j]){
				st.push(s[j]);	
			}
			if(st.top()!=s[j]){
				st.push(s[j]);
				st.pop();
				st.pop();	
			}
			
		}
		if(st.size()==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;	
}