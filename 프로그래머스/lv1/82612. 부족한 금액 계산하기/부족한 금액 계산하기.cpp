#include <stdlib.h>

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long left=0;
    for(int i=1; i<=count ; i++){
        left+= price*i;
        
    }
    if(money-left<0) answer= llabs(money-left);
    else answer=0;
    return answer;
}