#include <bits/stdc++.h>
using namespace std;
int n,m,res,start=0, answer=0;
int main(){
	cin>>n;
	vector <int> v;
	for(int i=0; i<n; i++){
		cin>>m;
		v.push_back(m);
	}
	cin>>res;
	int temp=0;
	sort(v.begin(), v.end());
	int end=v.size()-1;
	while(start<end){
		temp=v[start]+v[end];
		if(temp<res){
			start ++;	
		}
		else if(temp>res){
			end--;	
		}
	
		else if(temp==res){
				answer++;
				start++;
				end--;	
		}
	}
	cout<<answer;
	return 0;
}