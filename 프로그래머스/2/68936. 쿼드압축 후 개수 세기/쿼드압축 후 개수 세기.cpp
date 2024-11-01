#include <string>
#include <vector>

using namespace std;

vector<vector<int>> MAP;
vector<int> answer(2,0);

void dfs(int y, int x, int len){
    
    bool zero=true, one=true;
    
    for(int i=y; i<y+len; i++){
        for(int j=x; j<x+len; j++){
            if(MAP[i][j]==1)
                zero=false;
            if(MAP[i][j]==0)
                one=false;
        }
    }
    
    if(zero==true){
        answer[0]++;
        return;
    }
    if(one==true){
        answer[1]++;
        return;
    }
    
    int mid=len/2;
    dfs(y,x,mid);
    dfs(y,x+mid,mid);
    dfs(y+mid,x,mid);
    dfs(y+mid,x+mid,mid);    
}

vector<int> solution(vector<vector<int>> arr) {
    MAP=arr;   
    dfs(0,0,arr.size());
    return answer;
}