#include<string>
#include <iostream>
#include <stack>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> a;
    // if(s[0]==')') {
    //         answer=false;
    //         return answer;
    //     }
    //  a.push(s[0]);
    for(int i=0; i<s.length(); i++){ 
        if(a.empty() && s[i]==')') {
            answer=false;
            return answer;
        }
        if(s[i]==a.top()||a.empty()){
            a.push(s[i]);
        }
        else{
            a.push(s[i]);
            a.pop();
            a.pop();
        }     
    }
    if(a.size()!=0) answer=false; 

    return answer;
}