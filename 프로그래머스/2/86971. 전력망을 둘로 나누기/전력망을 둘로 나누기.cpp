#include <string>
#include <vector>
#include <iostream>
int counter = 0;
bool visit[101];
using namespace std;
void DFS(vector<vector<int>> v, int i){
    if(visit[i]) return;
    visit[i]=true;
    counter++;
    for(int j=0; j<v[i].size(); j++){
            DFS(v,v[i][j]);
            
    }

    return;
}
int solution(int n, vector<vector<int>> wires) {
    int answer = n;
    
    for(int i = 0; i < n - 1; i++) {
        vector<vector<int>> v(n + 1, vector<int>());
        //memset(visit, 0, sizeof(visit));
        fill(&visit[0],&visit[0]+101,0);
        counter = 0;
        
        for(int j = 0; j < n - 1; j++) {
            if(i == j)
                continue;
            else {
                // 양방향 연결
                v[wires[j][0]].push_back(wires[j][1]);
                v[wires[j][1]].push_back(wires[j][0]);
            }
            
        }
        
        
        DFS(v, 1);
        //cout<<counter<<endl;
        if( abs(counter-abs(n-counter))<= answer)
            answer =abs(counter-abs(n-counter));
        
    }
    
    
    return answer;
}