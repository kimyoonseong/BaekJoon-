#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    if(s.size()%2==0){
        answer+=s[s.size()/2-1];
        answer+=s[s.size()/2];
        //answer.insert(0,s.size()/2-1);
        //answer.insert(1,s.size()/2);
        
    }
    else answer=s[s.size()/2];
    return answer;
}