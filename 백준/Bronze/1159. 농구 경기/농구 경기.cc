#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	string str,ret;
	int cnt[1000]={0,};
	for(int i=0; i<n; i++){
		cin>>str;	
		cnt[str[0]-'a']++;
		
	}
	for(int i=0; i<26; i++){
		//cout<<cnt[i]<<endl;	
		if(cnt[i]>=5){
			ret+=i+'a'	;
		}
	}
	if(ret.size()>0)cout<<ret;
	else cout<<"PREDAJA";
}