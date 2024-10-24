#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	map <char, int > mp;
	for(int i=0; i<s.length(); i++){
		mp[s[i]]++;
	}
	int mx=-99999;
	for( auto it: mp){
		mx=max(mx, it.second);	
	}
	int cnt=0;
	for( auto it: mp){
		if(it.second==mx){
			cnt++;	
		}
	}
	if(cnt>=2) {
		cout<<"?";
		return 0;
	}
	for( auto it: mp){
		if(it.second==mx){
			cout<<it.first;
		}
	}
	return 0;
}