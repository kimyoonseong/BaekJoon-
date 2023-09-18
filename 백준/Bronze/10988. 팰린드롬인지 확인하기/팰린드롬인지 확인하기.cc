#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string str,str2;
	cin>>str;
	str2=str;
	reverse(str.begin(),str.end());
	if(str==str2)cout<<"1";
	else cout<<"0";
 	return 0;
}