

#include<iostream>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n, m,max=0;
		int a[15][15];
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];

			}
		}
		for (int i = 0; i < n - m+1; i++) {
			for (int j = 0; j < n - m+1; j++) {
				int sum = 0;
				for (int k = 0; k < m; k++) {
					for (int h = 0; h < m; h++) {
						sum += a[k + i][h + j];
						
					}

				}
				if (sum > max) {
					max = sum;
				}

			}
		}
		cout << "#" << test_case<<" "<<max << endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}