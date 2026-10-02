#include <string>
#include <vector>
#include <stack>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> prices) {
    int n = prices.size();
    vector<int> answer(n);
    stack<int> s;
    
    for(int i = 0; i < n; i++) {//초 카운트
        // 첨엔 push &&  만약 이전이 크다면~
        while(!s.empty() && prices[s.top()] > prices[i]) {
            //cout<<s.top();
            answer[s.top()] = i - s.top();//인덱스 만큼 빼서 초값
            s.pop();
        }
        s.push(i);
    }
    //계속 증가한련들 처리 
    while(!s.empty()) {
        answer[s.top()] = n - s.top() - 1;
        s.pop();
    }
     return answer;
}