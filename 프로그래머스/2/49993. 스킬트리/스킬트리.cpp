#include <string>
#include <vector>
#include <iostream>
using namespace std;
bool check(string a, string b){
    int temp=0, len=a.size();
    for(int i=0; i<b.size(); i++){
        if(b[i]==a[temp]){
            temp++;
            continue;
        }
        int pos=a.find(b[i]);
        if(temp<pos) return false;
    }
    //cout<<b<<endl;
    return true;
}
int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    for(int i=0; i<skill_trees.size(); i++){
        string sk=skill_trees[i];
        //bool flag=false;
        if(check(skill,sk)) answer++;
    }
    return answer;
}