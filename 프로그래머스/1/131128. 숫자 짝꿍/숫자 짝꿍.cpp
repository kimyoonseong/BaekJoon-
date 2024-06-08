#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(string X, string Y) {
//     string answer = "";

//     for(char x: X){
//         size_t pos=Y.find(x);
        
//         if(pos!=string::npos){
//                if(x=='0'){
//                    //cout<<"들어옴";
//                    size_t pos2= answer.find('0');
//                     if(pos2!=string::npos)continue;
//                }
//                 answer+=x;
//                 Y.erase(pos,1);
//         }
//     }
//     sort(answer.rbegin(),answer.rend());
    
//     if(answer.size()==0) answer+="-1";
    //시간초과
    vector<int> freqX(10, 0);
    vector<int> freqY(10, 0);
    string answer = "";

    // X에서 각 숫자의 빈도수를 계산
    for(char x: X){
        freqX[x - '0']++;
    }

    // Y에서 각 숫자의 빈도수를 계산
    for(char y: Y){
        freqY[y - '0']++;
    }

    // 공통 숫자와 최소 빈도를 찾기
    for(int i = 0; i < 10; ++i){
        int common_count = min(freqX[i], freqY[i]);
        answer += string(common_count, '0' + i);
    }

  
    sort(answer.rbegin(), answer.rend());
    if(answer.empty()) return "-1";
    
    // answer가 0만 포함하는 경우 "0" 반환
    if(answer[0] == '0') return "0";
    
    return answer;
   
}