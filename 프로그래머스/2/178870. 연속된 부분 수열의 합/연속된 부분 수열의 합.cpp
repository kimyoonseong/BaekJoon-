// #include <string>
// #include <vector>
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> solution(vector<int> sequence, int k) {
//     vector<int> answer;
//     vector<pair<int,int>> v;
//     int start=0;
//     int count=9999999;
//     while(start<sequence.size()){
//         int end;
//         int temp=0;
//         for(int i=start; i<sequence.size(); i++){
//             temp+=sequence[i];
//             if(temp>k) break;
//             if(temp==k){
//                 end=i;
//                 v.push_back({start,end});
//                 break;
//             }
//         }
//         start++;
//     }
//     int x,y;
//     int min_diff=9999999,min_x,min_y;
//     for(int i = 0; i < v.size(); i++){
//         tie(x, y) = v[i];
//         int count = y - x;

//         // 최소 차이를 찾는 로직
//         if(count < min_diff){
//             min_diff = count;
//             min_x = x;
//             min_y = y;
//         }
//     }
//     answer.push_back(min_x);
//     answer.push_back(min_y);
    
//     //cout<<count;
//     return answer;
// }
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer;
    int n = sequence.size();
    int start = 0, end = 0, sum = 0;
    int min_len = n + 1;  
    int min_start = 0, min_end = 0;  

    while (end < n) {
        sum += sequence[end];
        while (sum >= k) {
            if (sum == k) {
            
                if (end - start < min_len) {
                    min_len = end - start;
                    min_start = start;
                    min_end = end;
                }
            }
            // start를 증가시키며 합을 줄임
            sum -= sequence[start];
            start++;
        }
        end++;
    }

    answer.push_back(min_start);
    answer.push_back(min_end);

    return answer;
}
