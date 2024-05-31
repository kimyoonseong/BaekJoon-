#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    string name="Kim";
    for(int i=0; i<seoul.size(); i++){
        if(seoul[i]==name) answer="김서방은 "+to_string(i)+"에 있다";
    }
    // int pos=seoul.find(name);
    
    return answer;
}