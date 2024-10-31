#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;

    while (true) {
        // 조건을 만족하면 종료
        sort(wallet.begin(), wallet.end(), greater<int>());
        sort(bill.begin(), bill.end(), greater<int>());
        if (wallet[0] >= bill[0] && wallet[1] >= bill[1]) {
            break;
        }

        // `bill`의 두 값 중 더 큰 값을 반으로 접음
        if (bill[0] > bill[1]) {
            bill[0] /= 2;
        } else {
            bill[1] /= 2;
        }
        
        answer++;
    }

    return answer;
}