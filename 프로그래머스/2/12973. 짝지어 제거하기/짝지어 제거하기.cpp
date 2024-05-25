#include <iostream>
#include<string>
#include<stack>
using namespace std;

int solution(string s)
{
    stack<int> stack;
    int answer = 0;
    for(int i=0; i<s.size();i++){
        if(stack.empty()){
            stack.push(s[i]);
        }
        else if(stack.top()!=s[i]){
            stack.push(s[i]);
            
        }
       else {
           stack.push(s[i]);
           stack.pop();
           stack.pop();
       }
    }
    if(stack.empty()) answer=1;

    return answer;
}