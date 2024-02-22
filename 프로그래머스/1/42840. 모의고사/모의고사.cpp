#include <string>
#include <vector>
#include <iostream>
//1번 1-2-3-4-5
//2번 1345 사이에 2
//3번 3-1-2-4-5 두번씩
using namespace std;
vector<int> answer1 {1,2,3,4,5};
vector<int> answer2 {2,1,2,3,2,4,2,5};
vector<int> answer3 {3,3,1,1,2,2,4,4,5,5};
vector<int> solution(vector<int> answers) {
    vector<int> count(3, 0);
    vector<int> answer;

    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == answer1[i % answer1.size()])
            count[0]++;
        if (answers[i] == answer2[i % answer2.size()])
            count[1]++;
        if (answers[i] == answer3[i % answer3.size()])
            count[2]++;
    }

    int maxCount = max(count[0], max(count[1], count[2]));
    for (int i = 0; i < 3; i++) {
        if (count[i] == maxCount)
            answer.push_back(i + 1); 
    }

    return answer;
}