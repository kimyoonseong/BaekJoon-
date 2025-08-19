#include <bits/stdc++.h>

using namespace std;
int n, m, minu;
int main(){

	cin>>n>>m;
	cin>> minu;
	int plus= m+minu;
	
	
	if(plus>=60){
		if(plus==60){
			n++;
			if(n>=24) n-=24;
			cout<<n<<" "<<"0";	
		}
		else {
			n+=plus/60;
			m= plus%60;
			if(n>=24) n-=24;
			cout<<n<<" "<< m;
				
		}
	}
	else {
		if(n>=24) n-=24;
		cout<< n<<" " << plus;
	}
	return 0;
}