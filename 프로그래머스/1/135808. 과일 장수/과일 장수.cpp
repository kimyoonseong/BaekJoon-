#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
priority_queue<int> pq;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    for(int i=0; i<score.size(); i++)
        pq.push(score[i]);
    while(pq.size() >= m) {
        for(int i=0; i<m-1; i++) pq.pop();
        answer += pq.top() * m;
        pq.pop();
    }
    return answer;
}