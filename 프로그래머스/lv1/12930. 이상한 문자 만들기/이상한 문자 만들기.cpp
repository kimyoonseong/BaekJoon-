#include <string>
#include <vector>
#include <sstream>
using namespace std;

string solution(string s) {
    string answer = "";
    
    int idx=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==' '){
            idx=0;
            continue;
        }
        if(idx%2==1){
            if(s[i]<=90) s[i]+=32;
            
        }
        else{
            if(s[i]>=96)s[i]-=32;
            
        }
        idx++;
        
    }
    return s;
}