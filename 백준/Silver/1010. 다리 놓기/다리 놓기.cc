#include <bits/stdc++.h>
using namespace std;

int main() {


	int T;
	cin >> T;


	for (int i = 0; i < T; i++) {
		int n, m;
		cin >> n >> m;

		long answer = 1;
		int k = 1;
		for (int j = m; j > m - n; j--) {
			answer *= j;
			answer /= k;
			k++;
		}

		cout << answer << "\n";
	}
	return 0;
}