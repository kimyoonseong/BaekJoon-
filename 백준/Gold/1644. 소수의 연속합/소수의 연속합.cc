#include <bits/stdc++.h>
using namespace std; 
bool check(int i){
	if(i==1) return false;
	if(i==2) return true;
	for(int j=2; j*j<=i; j++){
		if(i%j==0) return false;	
	}
	return true;
}
int main(){
    int n, cnt = 0, start = 0, end = 0;
    cin >> n;
    vector<int> primes;
    for (int i = 1; i <= n; i++) {
        if (check(i)) {
        	//cout<<i<<endl;
            primes.push_back(i);
        }
    }
	//for(auto j: primes) cout<<j<<endl;
    int sum = 0;

	while(end<primes.size()){
		if(sum<n){
			sum+=primes[end];
			end++;	
		}
		if(sum>n){
			sum-=primes[start];
			start++;
				
		}
		if(sum==n) {
			cnt++;
			sum-=primes[start];
			start++;
		}
	}
	cout<<cnt;
	return 0;
}