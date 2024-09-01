#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,ans=0;
	vector <int> v;
	cin>>n>>m;
	for(int i=0; i<n;  i++) {
		int k;
		cin>>k;
		v.push_back(k);
	}
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			for(int k=j+1; k<n; k++){
				int temp;
				temp=v[i]+v[j]+v[k];
				if(temp<=m && ans<temp) ans=temp;
//				if(temp>m) break;
//				ans=max(temp,ans);
				
			}
		}
	}
	cout<<ans;
	return 0;
}