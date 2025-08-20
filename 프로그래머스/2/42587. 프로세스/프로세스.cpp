#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
vector <pair<int,int>> v;

int solution(vector<int> priorities, int location) {

     queue<pair<int, int>> q;
    priority_queue<int> pq;
    
    for (int i = 0; i < priorities.size(); i++) {
        q.push({i, priorities[i]});
        pq.push(priorities[i]);
    }
    
    int answer = 0;
    
    while (!q.empty()) {
        int idx = q.front().first;
        int priority = q.front().second;
        q.pop();
        
        if (priority == pq.top()) {
            pq.pop();
            answer++;
            if (idx == location) {
                return answer;
            }
        } else {
            //cout<<idx<<endl;
            q.push({idx, priority});
        }
    }
    
    return answer;
    
   
}