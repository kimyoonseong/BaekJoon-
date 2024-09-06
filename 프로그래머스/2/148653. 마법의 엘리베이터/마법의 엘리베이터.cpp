#include <string>
#include <vector>

using namespace std;

int solution(int storey) {
    int answer = 0;
    while(storey!=0){
        int i=storey%10;
        if(i>5){
            answer+= 10-i;
            storey+=10-i;
        }
        else if(i<5){
            answer+=i;
            storey-=i;
        }
        else {
            int k= (storey%100)/10;
            if(k>5){
                answer+= 10-i;
                storey+=10-i;
            }
            else if(k<5){
                answer+=i;
                storey-=i;
            }
            else {
                     answer+= 10-i;
                     storey+=10-i;
            }
        }           
        storey/=10;
    }
    return answer;
}