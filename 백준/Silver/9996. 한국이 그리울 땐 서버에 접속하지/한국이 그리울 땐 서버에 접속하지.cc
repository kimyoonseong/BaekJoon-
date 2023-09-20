#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	string str;
	cin>>str;
	int pos=str.find('*');
	string pre,suf;
	pre=str.substr(0,pos);
	suf=str.substr(pos+1);
	string s;
	for(int i=0; i<n; i++){
		cin>>s;
		
		if(pre.size()+suf.size()>s.size()){
				cout<<"NE\n";
		}
		else {
			if	(pre==s.substr(0,pre.size())&&suf==s.substr(s.size()-suf.size())) cout<<"DA\n";
			else cout<<"NE\n";
		}
		
	}
	return 0;
}