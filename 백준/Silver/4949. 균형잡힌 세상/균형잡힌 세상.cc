#include<bits/stdc++.h>
using namespace std; 
int main(){
	while(true){
		string s;
		getline(cin,s);
		if(s==".") break;
		stack<int> st;
		bool flag=true;
		for(int i=0; i<s.length(); i++){
			if(s[i]==')'){
				if(st.size()==0||st.top()=='['){
					flag=false;
					break;
				}else {
					st.pop();	
				}
			}
			if(s[i]==']'){
				if(st.size()==0||st.top()=='(') {
					flag=false;
					break;
				}else {
					st.pop();	
				}
			}
			if(s[i] == '(') st.push(s[i]);
            if(s[i] == '[') st.push(s[i]);
		}
		if(flag && st.size()==0) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	

	return 0;	
}