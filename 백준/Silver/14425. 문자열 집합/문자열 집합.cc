#include <iostream>
#include <set>
#include <bits/stdc++.h>
using namespace std;

int N, M, ans;
string n_str, m_str;
set<string> n;
//vector<string> v; 
int main() {
    cin >> N >> M;
    
    for (int i = 0; i < N; i++) {
        cin >> n_str;
        n.insert(n_str);
        //v.push_back(n_str);
    }
    
 	for(int i=0; i<M; i++){
 		cin>>m_str;
		if (n.find(m_str) != n.end()) {
            ans++;
        } 	
 	}
	    
    cout<<ans;
	return 0;
}
	
	