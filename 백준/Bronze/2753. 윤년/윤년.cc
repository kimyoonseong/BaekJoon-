#include <bits/stdc++.h>

using namespace std;
int n;
bool flag=false;
int main(){
	cin>>n;

	
	
	if((n%4==0 && (n%100) !=0 ) || n%400==0){
		flag=true;	
	}
	if(flag) cout<<"1";
	else cout<<"0";
	
	return 0;
}