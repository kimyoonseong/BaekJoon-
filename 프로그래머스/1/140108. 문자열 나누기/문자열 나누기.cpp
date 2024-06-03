#include <string>
#include <vector>
#include <iostream>
#include <stack>
using namespace std;

int solution(string s) {
    stack<int> stack;
    int answer = 0;
    int cnt1=0;
    int cnt2=0;
    for(int i=0; i<s.size();i++){
        
        if(stack.size()==0){
            stack.push(s[i]);
            cnt1++;
            continue;
        }
        if(stack.top()==s[i]){
            stack.push(s[i]);
            cnt1++;
        }
        else cnt2++;
        
        if(cnt1==cnt2){
            //cout<<"cnt1:"<<cnt1<<"cnt2:"<<cnt2<<endl;
            while( !stack.empty() ) stack.pop();
            cnt1=0; 
            cnt2=0;
            answer++;
        }
    }
    if(stack.size()!=0) answer++;
    return answer;
}