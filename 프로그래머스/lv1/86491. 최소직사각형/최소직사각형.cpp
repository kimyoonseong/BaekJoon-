#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> sizes) {
   int w = 0, h = 0;
    for(auto i = 0; i < sizes.size(); ++i){
        auto large_value = max(sizes[i][0], sizes[i][1]);
        auto small_value = min(sizes[i][0], sizes[i][1]);
        w = max(w, large_value);
        h = max(h, small_value);
    }
    return w * h;
    //return answer;
}