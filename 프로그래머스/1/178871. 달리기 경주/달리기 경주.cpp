#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
   unordered_map<string, int> m;
	for(int i=0; i<players.size(); i++){
         m[players[i]] = i;       
    }
    for(auto it: callings){
        int idx = m[it];
        string tmp=  players[idx];
        players[idx]=players[idx - 1];
        players[idx - 1]= tmp;
        
        string front = players[idx - 1];
        string cur = players[idx];
        int flagg= m[cur];
        m[cur] = m[front];
        m[front] = flagg;
    }
    // for(auto it: m){
    //     cout<<it.first;
    //     cout<<it.second<<endl;
    // }
    return players;
}