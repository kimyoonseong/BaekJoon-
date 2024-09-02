#include <bits/stdc++.h>
using namespace std;
int n;
bool check(int i){
	int temp=0;
	temp+=i;
	while(i>0){
		temp+=i%10;
		i=i/10;
	}
	if(n==temp) {
		return true;
	}
	return false;
}
int main(){
 	cin>>n;
 	bool k=false;
 	for(int i=1; i<1000000; i++){
 		k=check(i);
		if(k==true) {
			cout<<i;
			break;
		}
 	}
 	if(!k) cout<<0;
	return 0;
}