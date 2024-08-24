#include <string>
#include <vector>
#include <stack>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> prices) {
    int n = prices.size();
    vector<int> answer(n);
    stack<int> s;
    
    for(int i = 0; i < n; i++) {
        // 스택에 있는 인덱스들의 가격이 현재 가격보다 크면, 해당 인덱스에서의 기간을 계산
        while(!s.empty() && prices[s.top()] > prices[i]) {
            //cout<<s.top();
            answer[s.top()] = i - s.top();
            s.pop();
        }
        s.push(i);
    }
     
    while(!s.empty()) {
        answer[s.top()] = n - s.top() - 1;
        s.pop();
    }
     return answer;
}