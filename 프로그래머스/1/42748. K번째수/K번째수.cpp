#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(int i=0; i<commands.size() ;i++){
        vector<int> temp;
       int nFirst=commands[i][0]-1;
        int nLast=commands[i][1]-1;
        int nPos=commands[i][2]-1;
     
        for(int j=nFirst; j<=nLast; j++){
            temp.push_back(array[j]);
            
        }
       
        sort(temp.begin(),temp.end());
       for(int k=0; k<temp.size(); k++){
            cout<<temp[k]<<" ";
        }
        cout<<"\n";
        answer.push_back(temp[nPos]);
       
    }
    
    return answer;
}