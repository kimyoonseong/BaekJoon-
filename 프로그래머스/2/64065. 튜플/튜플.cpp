#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

bool compare(string a, string b){
    return a.size()<b.size();
}

vector<string> split(string str, char delimiter) {
    vector<string> internal; string temp;
    stringstream ss(str);
    while (getline(ss, temp, delimiter)) {
        internal.push_back(temp);
    }
    return internal;
}

vector<int> solution(string s) {
    vector<int> answer;
    vector<string> tmpvec;
    
    string tmpstr = "";
    for(int i=2; i<s.length()-2; i++){
        if(s[i-1]=='{') tmpstr = "";
            tmpstr += s[i];
            if(s[i+1]=='}'){ // 집합 종료
                tmpvec.push_back(tmpstr);
                tmpstr = "";
            }
    }
    
    sort(tmpvec.begin(), tmpvec.end(), compare);
    answer.push_back(stoi(tmpvec[0]));
    
    for(int i=1; i<tmpvec.size(); i++){
        string numstr = tmpvec[i];
        vector<string> elements = split(numstr, ',');
        for(int j=0; j<elements.size(); j++){
            int element = stoi(elements[j]);
            auto itr = find(answer.begin(), answer.end(), element);
            if(itr==answer.end()){
                answer.push_back(element);
            }
        }
    }
    
    return answer;
}