#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    int day=0;
    for(int i=0; i<progresses.size(); i++){
        
            if((100-progresses[i])%speeds[i]==0){
                day=(100-progresses[i])/speeds[i];
            }
            else day=(100-progresses[i])/speeds[i]+1;
          cout<<day<<endl;  
        if(q.size()==0||q.front()>=day){
           q.push(day);
        }
        else {
            answer.push_back(q.size());
            //queue<int> q; 초기화안됨
             q = queue<int>();
            q.push(day);
        }

            
    }
   // cout<<q.size();
    answer.push_back(q.size());
   // q.push(q.size());
    return answer;
}