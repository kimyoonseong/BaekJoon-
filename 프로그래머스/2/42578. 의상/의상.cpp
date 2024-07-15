#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {

    int answer = 1;

    unordered_map<string, int> number_by_type;
    for (int i = 0; i < clothes.size(); i++)
    {
        number_by_type[clothes[i][1]]++;
    }

    for (auto kvp : number_by_type)
    {
       
        answer *= kvp.second + 1;
    }

    // 아무것도 안입은 경우는 제외
    answer -= 1;

    return answer;
}