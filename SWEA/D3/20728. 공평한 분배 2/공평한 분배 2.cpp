#include<iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;

	for (test_case = 1; test_case <= T; test_case++)
	{

		vector<int> x;

		int a, b;
		cin >> a >> b;

		for (int i = 0; i < a; i++) {
			int num;
			cin >> num;
			x.push_back(num);
		}

		sort(x.begin(), x.end(),greater<>());

		//x,x+2의 차이중 최소인것 출력
		
		int min1 = 1e9;
		for (int i = 0; i < x.size(); i++) {
			if (i + (b-1)< x.size()) {
				min1 = min(x[i] - x[i + (b - 1)], min1);
			}
		}

		cout << "#" <<test_case << " " << min1<<"\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}