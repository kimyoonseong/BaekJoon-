#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
   
    int count=0;
    for(int i=0; i<=s.size(); i++){
        if(count==-1){
            answer.push_back(-1);
        }
        count=-1;
        for(int j=i-1; j>=0; j--){
            if(s[i]==s[j]){
                answer.push_back(i-j);
                count=1;
                break;
            }
             
        }
      
        //if(count=1) continue;
       // else if(count=-1){
        //    answer.push_back(-1);
        //}
        
    }
    return answer;
}