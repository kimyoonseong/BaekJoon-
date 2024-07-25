#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
vector <pair<int,int>> v;
// bool cmp(pair<int, int> a, pair<int,int> b){
//     if(a.second==b.second){
        
//         return a.first<b.second;
//     }
//     return a.second>b.second;
// }
int solution(vector<int> priorities, int location) {
//     int answer = 0;
//     for(int i=0; i<priorities.size(); i++){
//         v.push_back({i,priorities[i]});
//     }
//     sort(v.begin(), v.end(), cmp);
//     for(pair<int,int> it: v){
//         cout<<it.first<<":"<<it.second<<endl;
//     }
//     //int ret=v[location-1];
//     for(int i=0; i<v.size(); i++){
//         if(v[i].first==location){
//             answer=i+1;
//         }
//     }
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
            q.push({idx, priority});
        }
    }
    
    return answer;
    
   
}