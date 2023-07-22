#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(string s) {
    map<string,int> tmpl;
    tmpl["zero"] = 0;
    tmpl["one"] = 1;
    tmpl["two"] = 2;
    tmpl["three"] = 3;
    tmpl["four"] = 4;
    tmpl["five"] = 5;
    tmpl["six"] = 6;
    tmpl["seven"] = 7;
    tmpl["eight"] = 8;
    tmpl["nine"] = 9;
    
    size_t position = 0;
    for(auto iter = tmpl.begin(); iter != tmpl.end(); ++iter)
    {
        while((position = s.find(iter->first)) != string::npos)
        {
            s.replace(position, iter->first.size(), to_string(iter->second));
        }
    }
    int answer = stoi(s);
    return answer;
}