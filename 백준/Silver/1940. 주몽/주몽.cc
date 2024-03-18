#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<int> v;
	int cnt=0;
	for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

	if(m > 200000) cout << 0 << "\n";
	else{
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if(v[i] +v[j] == m)cnt++;
			}
		}
		cout<<cnt;
	} 
	
}