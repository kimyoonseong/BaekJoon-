#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n, m;
    ios_base::sync_with_stdio(false); // C 표준 입출력과 C++ 입출력의 동기화 해제
    cin.tie(); // cin과 cout의 묶음을 풀어줌 (입출력 독립적 수행)
    cout.tie();

    cin >> n >> m;
    vector<int> primes;
    for (int i = n; i <= m; i++) {
        if (isPrime(i)) {
            primes.push_back(i); 
        }
    }

    for (int prime : primes) {
        cout << prime << '\n'; 
    }

    return 0;
}