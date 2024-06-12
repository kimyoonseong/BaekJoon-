#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    unordered_map<string, int> kind = {{"code", 0}, {"date", 1},
                                       {"maximum", 2}, {"remain", 3}};
    
    for (vector<int> d : data){
        if (d[kind[ext]] <= val_ext)// val_ext보다 짧은것들 answer삽입
            answer.push_back(d);
    }
    int sort_idx = kind[sort_by];// 정렬 종류에 따라 
     
    
    sort(answer.begin(), answer.end(), [sort_idx](vector<int> a, vector<int> b){
        return a[sort_idx] < b[sort_idx];
    });
    return answer;
}