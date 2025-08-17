#include <bits/stdc++.h>
using namespace std;
long long n, a, b , c;
vector<int> v;
long long res=0;
int main(){
	cin>>n;

	for(int i=0 ; i<n; i++){
			cin>>a;
			v.push_back(a);
	}
	cin>>b>>c;
	
	for(auto it: v){
	
		if(b>=it){
		   res++;
		   continue;
		}
		else {
			res++;
			res += (long long)ceil((double)(it-b) / c); 
			//cout<<"-----------"<<(long long)ceil((double)(it-b) / c)<<endl;	
		}
	}
	cout<<res;
}