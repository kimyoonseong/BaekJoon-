#include <iostream>
using namespace std;

int solution(int n)
{
    int cnt=1;
    while (n!=1){
        if (n%2==0) n=n/2;
        else{
            n=n-1;
            cnt+=1;
            }
    }
    return cnt;
//     int ans = 0;
//     int count_min=21470000;
//     for(int i=1; i<n; i++){
//         int j=i;
//         while(j<n){
//             j*=2;
            
//             cout<<j;
//         }

//         if((n-j+i)<count_min) ans=n-j+i;
       
//     }
    
//     return ans;
}