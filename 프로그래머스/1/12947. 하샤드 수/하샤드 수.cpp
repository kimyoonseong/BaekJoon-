#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool solution(int x) {
    bool answer = true;
    int y=0;
    int z=x;
    while(x>0){
        y+=x%10;
        x=x/10;
    
    }
  
    if(z%y>0) answer=false;
    
    
    return answer;
}