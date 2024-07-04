#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int answer = 0;

void isPellin(string s, int left, int right) {
	int ans = 0;

	while (left >= 0 && right < s.size()) {
		if (s[left] != s[right]) {
			break;
		}
		left--;
		right++;
	}

	ans = right - left-1;

	answer = max(answer, ans);
}

int solution(string s)
{

	for (int i = 0; i<s.size(); i++) {
		isPellin(s, i, i+1);
		isPellin(s, i, i);
	}
	return answer;
}
