#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
bool check(int a, int b){
    int arr[3]={2,3,4};
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i]*a==arr[j]*b) {
               // cout<<"a: "<<a<<" b: "<<b<<endl;
                return true;
            }
        }
    }
    return false;
}
long long solution(vector<int> weights) {
    long long answer = 0;
    
    
    map<int,long long> m;
    int size=weights.size();
    for(int i=0;i<size;i++) m[weights[i]]++;//중복 체크
    sort(weights.begin(), weights.end());
    weights.erase(unique(weights.begin(), weights.end()), weights.end());//중복 삭제
    int size_=weights.size();
   
    for(int i=0; i<size_; i++){
        for(int j=i+1; j<size_; j++){//시간복잡도 n^2..
            bool flag= false;
            flag=check(weights[i],weights[j]);
            if(flag) answer += m[weights[i]]*m[weights[j]];
        }
    }
    for(auto c : m) answer += (c.second*(c.second-1))/2;
    return answer;
}