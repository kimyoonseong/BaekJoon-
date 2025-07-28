#include <iostream>
#include <queue>

using namespace std;

#define MAX 100001

int N, K; // N : 수빈이의 위치, K : 동생의 위치
int visited[MAX] = {};

int bfs() {
    queue<int> q; 
    q.push(N);
    visited[N] = 0;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        if (cur == K) break;

        int minus = cur - 1;
        int plus = cur + 1;
        int multi = cur * 2;

        // 1. -1
        if (minus >= 0 && visited[minus] == 0) {
            q.push(minus);
            visited[minus] = visited[cur] + 1;
        }

        // 2. + 1
        if (plus < MAX && visited[plus] == 0){
            q.push(plus);
            visited[plus] = visited[cur] + 1;
        }

        // 3. * 2
        if (multi < MAX && visited[multi] == 0) {
            q.push(multi);
            visited[multi] = visited[cur] + 1;
        }
    }

    return visited[K];
}

int main() {
    cin >> N >> K;
    cout << bfs();

    return 0;
}