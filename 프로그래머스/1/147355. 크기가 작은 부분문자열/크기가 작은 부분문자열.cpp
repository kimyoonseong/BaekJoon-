#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string t, string p) {
    int answer = 0;
    for(int i=0; i<t.length()-(p.length()-1); i++){
         long long t_size=stoll(t.substr(i,p.length()));
         long long p_size=stoll(p);
     
        if(t_size<=p_size){
            answer+=1;
        }
           
        
    }
    return answer;
}