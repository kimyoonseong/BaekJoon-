#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int num) {
    int answer = 0;

    while(num!=1){  
        
        if(num&1){
            num=num*3+1;
            answer++;
        }
        else{
            num/=2;
            answer++; 
        }
        if(answer>=450){
            answer=-1;
            break;
        };
    }
    
           
        
    return answer;
}