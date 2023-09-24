#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	int n,m,temp;
	cin>>n>>m;
	int a[100001],ret=-21470000,sum=0;
	for(int i=1; i<=n; i++){
		cin>>temp; a[i]=a[i-1]+temp;
	}
	for(int i=m; i<=n; i++){
		ret=max(ret,a[i]-a[i-m]);
	}
	/*
	for(int i=0; i<n; i++){
		sum=0;
		for(int j=i; j<m+i; j++){
			sum+=a[j];
		}
		if(sum>max) max=sum;
	}*/
	cout<<ret;
	return 0;
}