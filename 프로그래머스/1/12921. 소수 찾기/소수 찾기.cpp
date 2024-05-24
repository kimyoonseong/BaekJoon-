#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int i, j, flag;
	
	for(i=2; i<=n; i++){
		flag=1;
		for(j=2; j*j<=i; j++){
			if(i%j==0){
				flag=0;
				break;
			}
		}
		if(flag==1) answer++;
	}
	
    return answer;
}