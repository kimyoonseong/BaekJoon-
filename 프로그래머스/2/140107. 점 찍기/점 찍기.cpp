#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

long long solution(int k, int d) {
    long long answer = 0;
      for(long long i = 0; i <= d; i+=k) {
       
           
            long long y=sqrt((long long)d*d-(long long)i*i);
            answer+=floor(y/k)+1;
        
    }
// long long answer = 0;
    
//     // k의 배수
//     for(long long i = 0; i <= d; i+=k) {
        
//         long long maxY = sqrt((long long)d * d - (long long)i * i);
        
//         answer += floor(maxY / k) + 1;
        
//     }
//     for(int i=0; i<=d; i+=k){
//         for(int j=0; j<=d; j+=k){
//              //pair <long long,long long> point;
//             //point.first=i;
//             //point.second=j;
//             long long x=i;
//             long long y=j;
      
//             //if(sqrt((point.first)*(point.first)+(point.second)*(point.second))<=d){ 
//             if(sqrt((x*x)+(y*y))<=d){
//                 //cout<<point.first<<","<<point.second<<endl;
//                 answer++;
//             }
//             else break;
            
//         }
      
//     }
    return answer;
}