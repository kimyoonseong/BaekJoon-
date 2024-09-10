#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    int answer = -2,start=0, end=queue1.size(),count=0;
    vector<int> v;
    int len=queue1.size()+queue2.size();
    for(int i=0; i<queue1.size(); i++) v.push_back(queue1[i]);
    for(int i=0; i<queue2.size(); i++) v.push_back(queue2[i]);
    long res=0;
    for(auto it: v) res+=it;
    if(res%2==1) return -1;
    res/=2;
    long temp=0;
    for(auto t: queue1) temp+=t;
    
    while(start<len&&end<len){
        if(temp>=res){
            if(temp==res){
                return count;
            }
            temp-=v[start];
            start++;
            count++;
            continue;
        }
        
        temp+=v[end];  
        end++;
        count++;
        
    }
    return -1;
    
   // return answer;
}