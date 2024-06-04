#include <string>
#include <vector>
#include <iostream>
#include <algorithm> // for find
#include <map>
using namespace std;

// string solution(vector<string> participant, vector<string> completion) {
//     string answer = "";
//     for(string s: participant ){
//         auto it = find(completion.begin(), completion.end(), s); // 요소 찾기
//         if (it != completion.end()) { 
//             completion.erase(it);
//         } else { 
//             answer = s;
//             break;
//         }
        
//     }
//     return answer;
// }해쉬 맵안써서 O(n**2)
string solution(vector<string> participant, vector<string> completion) {
    map<string, int> participant_map;

    // 참가자들을 map에 추가하며 카운트 증가
    for (const string& p : participant) {
        participant_map[p]++;
    }

    // 완주한 사람들의 카운트를 감소
    for (const string& c : completion) {
        participant_map[c]--;
    }

    // 카운트가 0이 아닌 사람을 찾음 (완주하지 못한 사람)
    for (const auto& p : participant_map) {
        if (p.second > 0) {
            return p.first;
        }
    }

    // 모든 참가자가 완주한 경우는 없지만, 형식적으로 빈 문자열 반환
    return "";
}