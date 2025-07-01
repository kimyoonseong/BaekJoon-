
#include <bits/stdc++.h>

using namespace std;
int main(){
	int n, min=21470000;
	cin>>n;
	vector<int> A;
	vector<int> B;
	for(int i=0; i<n; i++){
		int tmp;
		cin>>tmp; A.push_back(tmp);	
	}
//	for( auto i: A){
//		cout<<i<<endl;	
//	}
	for(int i=0; i<n; i++){
		int tmp;
		cin>>tmp; B.push_back(tmp);	
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end(),greater<int>());
	int sum=0;
	for(int i=0; i<n; i++){
		sum+=A[i]*B[i];
	}

//	do{
//		int tmp=0;
//		for(int i=0; i<n; i++){
//			tmp+=A[i]*B[i];
//		}
//		if(tmp<min) min=tmp;
//	}while(next_permutation(A.begin(), A.end()));
	
	cout<<sum;
	return 0;
	
}