#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
string to_two(int cnt){
    string s;
    if(cnt == 0) s = "0"; // cnt가 0인 경우 처리
    while(cnt>=1){
        if(cnt%2==1) s+="1";
        else s+="0";
        cnt/=2;
    }
    reverse(s.begin(), s.end());
   
    return s;
}
vector<int> solution(string s) {
    vector<int> answer;
    int ct=0;
    int ct2=0;
    while(s!="1"){
        
        int cnt=0;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] != '0') cnt++; // Use single quotes for character comparison
            else ct2++;
        }
        //cout<<"cnt"<<cnt<<endl;
        s=to_two(cnt);
        ct++;
        // cout<<s<<endl;
    }
    answer.push_back(ct);
    answer.push_back(ct2);
    return answer;
}