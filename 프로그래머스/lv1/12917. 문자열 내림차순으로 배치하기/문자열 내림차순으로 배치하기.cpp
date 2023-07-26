#include <string>
#include <vector>
#include<algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    sort(s.begin(),s.end(),greater<>());
    for (int i=0; i<s.size();i++){
        answer+=s[i];
    }
    return answer;
}