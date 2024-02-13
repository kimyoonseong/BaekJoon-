#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> jundang;
    for(int i=0; i<score.size(); i++){
        
       if(jundang.size()<k){ 
             jundang.push_back(score[i]);
             sort(jundang.begin(),jundang.end());
       }
        else if( jundang.size()==k){
            if(jundang[0]>=score[i]){
                answer.push_back(jundang[0]);
            }
            else{
                jundang.erase(jundang.begin());
                jundang.push_back(score[i]);
                 sort(jundang.begin(),jundang.end());
                 answer.push_back(jundang[0]);
            }
           continue;
        }
      answer.push_back(jundang[0]);
    }
    return answer;
}