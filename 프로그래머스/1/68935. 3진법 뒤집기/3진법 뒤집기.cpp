#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
string base(int n){
    string s;
    while(n>0){
        int remainder = n % 3;
        s += to_string(remainder);
        n=n/3;
    }
    return s;
}
int rebase(string s){
    int ans=0;
    int flag=1;
    for(int i=s.size()-1; i>=0; i--){
        cout<<"s[i] - '0'"<<s[i] - '0'<<endl;
        ans+=(s[i] - '0') * flag;
        cout<<"ans="<<ans<<endl;
        flag*=3;
    }
    return ans;
}
int solution(int n) {
    int answer = 0;
    string s;
    s=base(n);
    //reverse(s.begin(), s.end());
   
    answer=rebase(s);
    return answer;
}