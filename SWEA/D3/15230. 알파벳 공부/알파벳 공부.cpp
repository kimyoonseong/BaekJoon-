

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
		int cnt = 0;
		string a;
		cin >> a;
		for (int i = 0; i < a.length(); i++) {
			if (a[0] != 97) {
				break;
			}
			if (a[i] > a[i + 1]||a[i+1]-a[i]!=1) {
				cnt++;
				break;
			}
			cnt++;
		}
		
		cout << "#" << test_case<<" "<<cnt << endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}