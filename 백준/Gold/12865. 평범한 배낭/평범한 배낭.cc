#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>

using namespace std;

int main(){
    
    // 배낭 문제 풀이
    int n, k;
    cin >> n >> k;
    
    vector<int> w(n), v(n);
    for (int i = 0; i < n; i++) {
        cin >> w[i] >> v[i];
    }
    vector<int> dp(k + 1, 0);
    
    for (int i = 0; i < n; i++) {
        for (int j = k; j >= w[i]; j--) {
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }
    
    cout << dp[k] << endl;
    return 0;
}