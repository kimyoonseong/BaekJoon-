#include <iostream>
#include <vector>
using namespace std;

int main(){
	int k,answer=0;
	cin>>k;
	for(int i=0; i<k; i++){
		string k="";
		cin>>k;
		vector<int> v;
		for(int i=0; i<k.length(); i++){
		
			
			if(v.size()==0) v.push_back(k[i]); //백터 크기 0이면 push 
			else{
				v.push_back(k[i]);

				if(v.back()==v[v.size() - 2])	{
					v.pop_back();
					v.pop_back();
					
				}
				
			}
	
			
		}
		if(v.size()==0){
			answer++;
		}
			
	}
	cout<<answer;
}