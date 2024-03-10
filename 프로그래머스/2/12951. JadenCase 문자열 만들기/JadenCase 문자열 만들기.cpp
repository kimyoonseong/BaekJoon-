#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool inside = false;// 단어 안에 있는지 여부
    for(auto c : s) {
        if (c == ' ') {
            answer += ' ';
            inside = false;
        } else if (!inside) {// 단어 첫번째이면
            answer += toupper(c);
            inside = true;
        } else {
            answer += tolower(c);
        }
    }
    return answer;
}