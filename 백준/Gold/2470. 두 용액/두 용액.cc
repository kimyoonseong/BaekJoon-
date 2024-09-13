#include <bits/stdc++.h>
using namespace std;
int n;
//bool cmp(int a, int b){
//	//if(a>=0 && b>=0) return a<b;
//	//if(a<0 && b<0) return abs(a)<abs(b);
//	return abs(a)<abs(b);
//}
int main(){
	ios_base::sync_with_stdio(false); // C++ 입출력 속도 최적화
    cin.tie(NULL); // C++ 입출력 속도 최적화
	cin>>n;
	int k,start=0;
	vector <int> v;
	for(int i=0; i<n; i++){
		cin>>k;
		v.push_back(k);
	}
//	sort(v.begin(),v.end(),cmp);
	sort(v.begin(),v.end());
	int end=v.size()-1;
	//for(auto it: v) cout<<it<<endl;
	int min_s = v[start], min_e = v[end];
	int min= abs(min_s + min_e);
	while(start<end){
		int temp=v[start]+v[end];
		if (temp==0) {
			min_s=v[start];
			min_e=v[end]; 
			break;
		}
		
		if(abs(temp)<=min){
			min=abs(temp);
			min_s=v[start];
			min_e=v[end]; 
		}
		
		if(temp>0){
			end--;			
		}
		else if(temp<0){
			start++;
		}
		

	}
	 cout << min_s << " " << min_e << endl;
	return 0;
	
}