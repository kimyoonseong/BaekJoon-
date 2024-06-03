#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
 
    map<int, string> m1;
    map<string, int> m2;
    for(int i=0;i<players.size();i++)
    {
        m1[i] = players[i];
        m2[players[i]] = i;
    }
    for(int i=0;i<callings.size();i++)
    {
        int pos = m2[callings[i]];//호출 선수 이름, 순위
        
        string s = m1[pos - 1];//앞선 선수 이름, 순위
        m1[pos - 1] = callings[i];
        m1[pos] = s;
        m2[callings[i]] = pos - 1;
        m2[s] = pos;
    }
    for(auto c : m1) answer.push_back(c.second);
    return answer;
}