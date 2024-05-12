/////////////////////////////////////////////////////////////////////////////////////////////
// 기본 제공코드는 임의 수정해도 관계 없습니다. 단, 입출력 포맷 주의
// 아래 표준 입출력 예제 필요시 참고하세요.
// 표준 입력 예제
// int a;
#include<iostream>
//#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int total;
		int a, b;
		cin >> total >> a >> b;
		int answer1, answer2;
		//answer1 = (a < b) ? a : b;
		answer1=min(a, b);
		if (a + b > total) {
			answer2 = a + b - total;
			//answer2 = abs(a - b);
		}
		else answer2 = 0;
		cout << "#" << test_case<<" ";
		cout << answer1 << " " << answer2<<endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}