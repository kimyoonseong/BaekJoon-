#include <bits/stdc++.h>
using namespace std;


int main() {
    int n[100][100];
    int m[100][100];
    int k[100][100];
    int r1, c1;
    cin >> r1 >> c1;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> n[i][j];
        }
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> m[i][j];
        }
    }
  
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            k[i][j] = 0;
            k[i][j] += n[i][j] + m[i][j];
        }
    }
   
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cout << k[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}