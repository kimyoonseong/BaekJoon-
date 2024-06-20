#include <string>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    char bf;
    bool flag= true;
    int cnt=0;
    vector <string> svec;
    for(auto i : words){
        if(flag) {
            cnt++;
            flag=false;
            bf=i[i.size()-1];
            svec.push_back(i);
            continue;
        }
        // auto it = find(svec.begin(), svec.end(), i); // 요소 찾기
        //  if (it != completion.end()) { 
        //     completion.erase(it);
        //  }
        auto it=find(svec.begin(), svec.end(), i);
//         if(it !=svec.end()){
//             cnt++;
//             cout<<cnt<<endl;
//             int first=0;
//             int second=0;
//             if(cnt%n==0) first=n;
//             else{
//                 first=cnt%n;
//             }
//             second= cnt/n;
            
//             answer.push_back(first);
//             answer.push_back(second);
//             return answer;
//         }
        if(i[0]!=bf||it !=svec.end()){
            cnt++;
            cout<<cnt<<endl;
            int first=0;
            if(cnt%n==0) first=n;
            else{
                first=cnt%n;
            }
            int second=0;
            if(cnt%n==0) second=cnt/n;
            else{
                second=cnt/n+1;
            }
            answer.push_back(first);
            answer.push_back(second);
            return answer;
        }
        cnt++;
        svec.push_back(i);
        bf=i[i.size()-1];
       
    }
    cout<<cnt<<endl;
    answer.push_back(0);
    answer.push_back(0);
    return answer;
}