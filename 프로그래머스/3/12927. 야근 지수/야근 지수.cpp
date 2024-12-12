#include <string>
#include <vector>
#include <queue>

using namespace std;

long long solution(int n, vector<int> works) {
    long long answer = 0;
    priority_queue<int> pq(works.begin(), works.end());

    int t;
    for (int i = 0; i < n; i++) {
        t = pq.top();
        pq.pop();
        t--;
        pq.push(t);
    }
    
    while (!pq.empty()) {
        t = pq.top();
        pq.pop();
        if (t < 0) {
            t = 0;
        }
        answer += t * t;
    }
    
    return answer;
}