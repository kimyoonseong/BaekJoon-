#include <bits/stdc++.h>
using namespace std;
int main(){
	  	int H, W, N, M;
  		cin >> H >> W >> N >> M;
  		int row_seats = (W - 1) / (M + 1) + 1;
        int col_seats = (H - 1) / (N + 1) + 1;
    	cout << row_seats * col_seats << endl;
	return 0;
	
}