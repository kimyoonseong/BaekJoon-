#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main() {
  
    int n;
    // vector <vector<int>> v(n, vector<int>(m,0));
    // for(auto it: v){
    //     for(auto it_ : it){
    //         cout<<it_<<" ";
    //     }
    //     cout<<endl;
    // }
    int tmp;
    vector<int> v;
    cin>>n;
    
    for(int i=1; i<=n; i++){
        cin>>tmp;
        v.insert(v.begin()+tmp,i);
    }
   for(int j=n-1; j>=0; j--){
     cout<<v[j]<<" ";
    }
    return 0;
}