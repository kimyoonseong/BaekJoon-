#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int min=21470000;
    for(int i=1; i<=n;i++){
        if(n%i==1){
            if(min>i) min=i;
        }
    }
    answer=min;
   
    return answer;
}