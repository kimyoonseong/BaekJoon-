#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i=0; i<s.size(); i++){
        if(s[i]<91&&s[i]>64){
            s[i]+=(n-26);
            if(s[i]<65){
                s[i]+=26;
            }
        }
       if(s[i]>96&&s[i]<123){
            s[i]+=(n-26);
            if(s[i]<97){
                s[i]+=26;
            }
        }
    }
    return s;
}