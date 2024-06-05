#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
     for (int i = 0; i < s.size(); i++) {
        char current = s[i];
        int count = 0;
       while(count<index){
           current++;
           if(current>'z'){
               current='a';
           }
           if(skip.find(current)!=string::npos){
               continue;
           }
           count++;
       }
        answer+=current;
    }
    return answer;
}