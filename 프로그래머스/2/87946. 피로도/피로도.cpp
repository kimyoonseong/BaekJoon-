#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    
    sort(dungeons.begin(),dungeons.end());
    do{
        int num=k;
        int sol=0;
        for (int i=0; i<dungeons.size(); i++){
            if(num>=dungeons[i][0]){
                num=num-dungeons[i][1];
                sol++;
            }   
        }
        answer=max(answer,sol);
    }while (next_permutation(dungeons.begin(),dungeons.end()));
    return answer;
}