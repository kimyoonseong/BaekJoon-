#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> num_list) {
    
    vector<int> answer;
    int cnt=0;
    
    sort(num_list.begin(),num_list.end());

    for(const auto &s:num_list){
        if(cnt<5) answer.push_back(s);
        cnt++;
    }
    
    return answer;
}