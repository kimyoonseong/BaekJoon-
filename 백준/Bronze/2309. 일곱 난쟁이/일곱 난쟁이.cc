#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    for(int i=0; i<9; i++){
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    do{
        int sum=0;
        for(int i=0; i<7; i++){
            sum+=v[i];
        }
        if(sum==100){
            for(int i=0; i<7; i++){
                cout<<v[i]<<endl;
            }
            break;
        }

    }while(next_permutation(v.begin(), v.end()));
    return 0;
}