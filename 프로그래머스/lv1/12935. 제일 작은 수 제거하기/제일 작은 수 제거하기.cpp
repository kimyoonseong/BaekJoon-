#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if (arr.size()==1){
        answer.push_back(-1);
    }
    else{
        int min=*min_element(arr.begin(),arr.end());
        int pos=find(arr.begin(),arr.end(),min)-arr.begin();
        
        arr.erase(arr.begin()+pos);
        answer=arr;
    }
    return answer;
}