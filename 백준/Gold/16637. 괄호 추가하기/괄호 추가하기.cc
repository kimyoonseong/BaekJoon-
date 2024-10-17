#include <bits/stdc++.h>
using namespace std;  

vector<int> num; 
vector<char> oper_str; 
int n, ret = -987654321;
string s; 
int oper(char a, int b, int c){
    if(a == '+') return b + c; 
    if(a == '-') return b - c; 
    if(a == '*') return b * c;  
} 
void go(int n, int num_){
	if(n==num.size()-1){
		ret=max(ret, num_);
		return ;
	}
	
	go(n+1, oper(oper_str[n], num_, num[n+1]));
	
	if(n+2<=num.size()-1){
		int temp= oper(oper_str[n+1],num[n+1],num[n+2]);
		go(n+2, oper(oper_str[n], num_, temp));
			
	}
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);  
    cin >> n;  
    cin >> s; 
    for(int i = 0; i < n; i++){
        if(i % 2 == 0)num.push_back(s[i] - '0');//숫자 
        else oper_str.push_back(s[i]);//연산자 
    } 
    go(0, num[0]);  
    cout << ret << "\n";
    return 0;
} 