#include <string>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

int bfs(pair<int, int> start, char target,  vector<string> maps) {
    int n = maps.size();
    int m = maps[0].size();
    int visited[104][104];
    fill(&visited[0][0], &visited[0][0] + 104 * 104, 0);

    queue<pair<int, int>> q;
    q.push(start);
    visited[start.first][start.second] = 1;  // 거리 1부터 시작

    while (!q.empty()) {
        int y, x;
        tie(y, x) = q.front(); q.pop();

        if (maps[y][x] == target)
            return visited[y][x] - 1;  // 시작을 1로 했으니 -1 반환

        for (int dir = 0; dir < 4; dir++) {
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            // 바깥 조건이면 continue로 정리
            if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if (maps[ny][nx] == 'X') continue;
            if (visited[ny][nx]) continue;

            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }

    return -1;  // target에 도달할 수 없음
}
int solution(vector<string> maps) {
    int n = maps.size();
    int m = maps[0].size();

    pair<int, int> start, lever, exit;

    // 시작점, 레버, 출구 위치 찾기
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (maps[i][j] == 'S') start = {i, j};
            else if (maps[i][j] == 'L') lever = {i, j};
            else if (maps[i][j] == 'E') exit = {i, j};
        }
    }

    int toLever = bfs(start, 'L', maps);
    if (toLever == -1) return -1;

    int toExit = bfs(lever, 'E', maps);
    if (toExit == -1) return -1;

    return toLever + toExit;
}