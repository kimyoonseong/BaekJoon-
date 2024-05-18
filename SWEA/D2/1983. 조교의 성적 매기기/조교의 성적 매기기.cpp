#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	//vector <string> str_vec ={"A+","A0","A-","B+","B0","B-","C+","C0","C-","D0"};
	string g[] = { "A+","A0","A-","B+","B0","B-","C+","C0","C-","D0" };

	int test_case;
	int T;

	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n, m;
		cin >> n >> m;
		vector<double> score(n);
		int result = 0;
		for (int i = 0; i < n; i++) {
			
			int arr[3];
			for (int k = 0; k < 3; k++) {
				cin >> arr[k];
			}
			
			
			double total;
			total = 0.35*arr[0] + 0.45*arr[1] + 0.2*arr[2];
			
			score[i] = total;
		}
		
		
		for (int i = 0; i < n; i++) {
			if (score[i] > score[m - 1])
				result++;
		}
		cout << "#" << test_case << " " << g[result / (n / 10)] << "\n";
	
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}