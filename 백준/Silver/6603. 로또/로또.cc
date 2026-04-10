#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int k;
	while(1){
		int k; cin >> k;
		if(k == 0) break;

		vector<int> v(k);
		for(int i = 0; i < k; i++)
			cin >> v[i];

        vector <bool> lt(k,true);
        for(int i=0; i<6; i++){
            lt[i]=false;
        }
        do{
          
            for(int i = 0; i < v.size(); i++){
				if(!lt[i]) cout << v[i] << ' ';
			}
            cout<<endl;

        }while(next_permutation(lt.begin(),lt.end()));
        cout<<'\n';
    }

    return 0;
}