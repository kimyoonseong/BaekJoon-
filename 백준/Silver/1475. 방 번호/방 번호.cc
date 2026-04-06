#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cin >> s;

    int cnt[10] = {0};

    for (int i = 0; i < s.length(); i++) {
        cnt[s[i] - '0']++;
    }

    cnt[6] = (cnt[6] + cnt[9] + 1) / 2;
  
    int answer = 0;
    for (int i = 0; i <= 8; i++) {
        answer = max(answer, cnt[i]);
    }

    cout << answer << '\n';
    return 0;
}