#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <string>
#include <cmath>
#include <queue>
#include <map>
#include <set>

using namespace std;

int n, lh, rh, rl, ll, body;
string s;
char a[1003][1003];
pair<int, int> head = { -1, -1 };
pair<int, int> heart = { -1, -1 };
pair<int, int> b;

int main() {
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < n; j++) {
			a[i][j] = s[j];
			if (head.first == -1 && head.second == -1 && s[j] == '*') {
				head = { i, j };
			}
		}
	}
	heart = { head.first + 1, head.second };
	for (int i = 0; i < heart.second; i++) {
		if (a[heart.first][i] == '*') lh++;
	}
	for (int i = heart.second + 1; i < n; i++) {
		if (a[heart.first][i] == '*') rh++;
	}
	for (int i = heart.first + 1; i < n; i++) {
		if (a[i][heart.second] == '*') {
			body++;
			b = { i, heart.second };
		}
	}
	for (int i = b.first + 1; i < n; i++) {
		if (a[i][b.second - 1] == '*') ll++;
	}
	for (int i = b.first + 1; i < n; i++) {
		if (a[i][b.second + 1] == '*') rl++;
	}
	cout << (heart.first + 1) << " " << (heart.second + 1) << '\n';
	cout << lh << " " << rh << " " << body << " " << ll << " " << rl << '\n';
	return 0;
}