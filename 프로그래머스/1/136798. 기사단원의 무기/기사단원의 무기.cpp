#include <string>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    vector<int> v;
    
    for(int i=1; i<=number;i++){
        int cnt=1;
      
        for(int j=1; j<=i/2; j++){
            if(i%j==0) cnt++;
            
            if(cnt>limit) break;
        }
        
        
        if(cnt>limit) v.push_back(power);
        else v.push_back(cnt);
    }
    
     for(int i:v ){
        cout<<i<<endl;
//         answer+=i;   
    }
    return answer=accumulate(v.begin(),v.end(),0);
}