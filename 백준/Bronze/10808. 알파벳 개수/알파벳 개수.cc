#include <iostream>
using namespace std;
int cnt[26];
int main(){
	char b[101];
	string str;
	cin>>str;
	for(char a: str){
		cnt[a-'a']++;	
	}
	for(int i=0; i<26; i++) cout<<cnt[i]<<" ";

 	return 0;
}