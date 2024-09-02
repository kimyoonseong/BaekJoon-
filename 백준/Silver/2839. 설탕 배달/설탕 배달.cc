#include <bits/stdc++.h>
using namespace std;
int n,i;
int a[]={3,5};
int main(){
 	cin>>n;
 	int cnt=0;
 	i=n;
	while(n>=0){
		if(n%5==0){
			cnt+=(n/5);
			cout<<cnt<<endl;
			return 0;
		}
		n-=3;
		cnt++;
	}
	cout<<-1<<endl;
	return 0;
}