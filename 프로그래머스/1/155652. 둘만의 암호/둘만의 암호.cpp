#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
     for (int i = 0; i < s.size(); i++) {
        char current = s[i];
        int count = 0;
        while (count < index) {
            current++;
            if (current > 'z') {
                current = 'a';
            }
            if (skip.find(current) == string::npos) {// skip에 문자가 없으면
                count++;
            }
        }
        answer += current;
    }
    return answer;
}