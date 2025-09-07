#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    
    int dy[4] = {0, 1, -1, 0};
    int dx[4] = {1, 0, 0, -1};
    
    for(int i = 0; i < 4; i++){
        int ny= dx[i]+h;
        int nx= dy[i]+w;
        if((0<=ny) && (0<=nx) && (board.size()>ny) && (board.size()>nx)){
            if(board[h][w]==board[ny][nx]){
                answer++;
            }
        }
           
    }
    
    return answer;
}

