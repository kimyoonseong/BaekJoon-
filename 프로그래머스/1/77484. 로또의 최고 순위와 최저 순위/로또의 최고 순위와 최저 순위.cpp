#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int max=0,min=0;
    for(int i=0; i< lottos.size(); i++){
        auto it = find(win_nums.begin(), win_nums.end(), lottos[i]);
        if(lottos[i]==0){
            max++;
        }
        if (it == win_nums.end()) {
            cout << lottos[i] << "은 찾을 수 없습니다.\n";
        }
        else{
            min++;
            max++;
        }
    }
    
    cout<<min;
    if(max>5){
        answer.push_back(1);    
    }
    else if(max>4){
        answer.push_back(2);    
    }
    else if(max>3){
        answer.push_back(3);    
    }
    else if(max>2){
        answer.push_back(4);    
    }
    else if(max>1){
        answer.push_back(5);    
    }
    else answer.push_back(6);
    
    
    if(min>5){
        answer.push_back(1);    
    }
    else if(min>4){
        answer.push_back(2);    
    }
    else if(min>3){
        answer.push_back(3);    
    }
    else if(min>2){
        answer.push_back(4);    
    }
    else if(min>1){
        answer.push_back(5);    
    }
    else answer.push_back(6);
    
    return answer;
}