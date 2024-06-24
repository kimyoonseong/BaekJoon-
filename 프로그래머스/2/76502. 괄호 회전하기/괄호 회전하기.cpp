#include <string>
#include <vector>
#include <iostream>
#include <stack>
using namespace std;
bool isValid(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '[' || s[i] == '(' || s[i] == '{') {
            st.push(s[i]);
        } else {
            if (st.empty()) return false;

            char top = st.top();
            st.pop();

            if ((s[i] == ')' && top != '(') ||
                (s[i] == '}' && top != '{') ||
                (s[i] == ']' && top != '[')) {
                return false;
            }
        }
    }
    return st.empty();
}
int solution(string s) {
    int answer=0;
 
    for (int i = 0; i < s.size(); i++) {
        if (isValid(s)) {
            answer++;
        }

        char firstChar = s[0];
        s.erase(0, 1);
        s += firstChar;
    }

    return answer;
}