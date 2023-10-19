#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    
    sort(number.begin(),number.end());
    /*do{
        int sum;
        for(int i=0; i<3; i++){
            sum+=number[i];
            if(sum==0){
                answer++;
            }
        }
    }while(next_permutation(number.begin(),number.end()));
    */
    for(int i=0 ; i<number.size(); i++){
        for(int j=i+1; j<number.size() ; j++){
            for(int k=j+1; k<number.size(); k++){
                if (number[i]+number[j]+number[k]==0) answer++;
            }
        }
    }
    return answer;
}