#include <bits/stdc++.h>

using namespace std;
string board[50];
string WB[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
};
string BW[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
};

int WB_wrong(int x, int y)
{
    int cnt = 0;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(board[x+i][y+j] != WB[i][j])
                cnt++;
    	}
    }
    return cnt;
}
int BW_wrong(int x, int y)
{
    int cnt = 0;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(board[x+i][y+j] != BW[i][j])
                cnt++;
        }
    }
    return cnt;
}
int main() {

    int cnt,n,m;
    int min_val = 21470000;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> board[i];
    for(int i = 0; i + 8 <= n; i++)
    {
        for(int j = 0; j + 8 <= m; j++)
        {
            int tmp;
            tmp = min(WB_wrong(i,j),BW_wrong(i,j));
            if(tmp < min_val) {
                min_val = tmp;
            }
        }
    }
    cout << min_val;
    return 0;
}