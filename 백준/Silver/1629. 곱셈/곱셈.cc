#include <iostream>
using namespace std;
typedef long long ll;
ll a, b, c;
ll go(ll a, ll b){
	if(b==1) return a%c;
	ll ret=go(a,b/2);
	ret= (ret*ret)%c;
	if(b % 2)ret = (ret * a)% c;//홀수일때 처리. 
	return ret;
}
int main(){
	cin >> a >> b >> c;
    cout << go(a, b) << "\n";
 	return 0;
}