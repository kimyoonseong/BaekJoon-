#include <iostream>
#include <queue>
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(NULL);
     int a, b, c, d, e, f;
    priority_queue<int> q;
    while(1){
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0)
            break;
        q.push(a), q.push(b), q.push(c);
        d = q.top(); q.pop();
        e = q.top(); q.pop();
        f = q.top(); q.pop();
        if(d >= e + f)
            cout << "Invalid";
        else{
            if(a == b && b == c && a == c)
                cout << "Equilateral";
            else if(a != b && b != c && a != c)
                cout << "Scalene";
            else
                cout << "Isosceles";
        }
        cout << '\n';
    }
	return 0;
}
