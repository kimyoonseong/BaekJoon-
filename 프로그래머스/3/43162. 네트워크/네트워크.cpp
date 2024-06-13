#include <string>
#include <vector>
#include <iostream>
using namespace std;
int visited[204];
// int dy[]={0,1,0,-1};
// int dx[]={1,0,-1,0};
void dfs(int cur, int n, vector<vector<int>> com){
    visited[cur]=1;
 
       for(int i = 0; i < n; i++){

            if(!visited[i] && com[cur][i] == 1){
                dfs(i, n, com);
        }
    }
}
int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for(int i = 0; i < n; i++){ 
        if(!visited[i]){ 
            
            dfs(i, n, computers); 
            answer++; 
        }
    }
    
    return answer;
}