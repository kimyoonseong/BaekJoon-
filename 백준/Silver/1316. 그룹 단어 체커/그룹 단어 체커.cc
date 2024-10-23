#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,cnt=0 ;
	string s;

	cin>>n;
	for(int i=0; i<n; i++){
		cin>> s;	
		map<char, int > m;
		for(int j=0; j<s.length(); j++){
			if(m[s[j]]==0){
				m[s[j]]++;
			}
			else {//if(m[s[j]]!=0)
				if(s[j-1]==s[j]){
					m[s[j]]++;
				}
				else break;
			}
			//cout<<j<<endl;	
			if(j==s.length()-1){
				//cout<<s<<endl;
			 cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}