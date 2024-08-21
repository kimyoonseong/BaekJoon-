#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int n,a[1000004],ret[1000004];
vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    cout<<1<<endl;
    memset(ret,-1,sizeof(ret));
    stack <int> st;
    for(int i=0; i<numbers.size(); i++){
        a[i]=numbers[i];
        while(st.size()&&a[st.top()]<a[i]){
            ret[st.top()]=a[i]; st.pop();
        }
        st.push(i);
    }
    for(int i=0; i<numbers.size(); i++ )answer.push_back(ret[i]);

     
    return answer;
}