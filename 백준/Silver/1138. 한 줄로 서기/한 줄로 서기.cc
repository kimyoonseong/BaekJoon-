#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector<int> result(n, 0); // 0으로 초기화된 줄
    for (int i = 1; i <= n; i++) {
        int left_greater;
        cin >> left_greater; // 나보다 키 큰 사람 수

        int empty_count = 0;
        for (int j = 0; j < n; j++) {
       
            if (result[j] == 0) {// 빈 자리이면서
                if (empty_count == left_greater) {// 왼쪽에 나보다 큰 사람이 다 채워졌을 때
                    result[j] = i;
                    break;
                }
                empty_count++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }


    return 0;
}