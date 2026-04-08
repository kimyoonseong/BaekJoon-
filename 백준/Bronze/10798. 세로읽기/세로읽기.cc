#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    // int n=3 , m=2; 
    // // vector<vector<int>> v(n, vector<int>(m));
    // vector<vector<int>> v(n, vector<int>(m));
    char arr[5][15] = {0};
    for (int i = 0; i < 5; i++)
		cin >> arr[i];

    for(int j=0; j<15; j++){
        for(int i=0; i<5; i++){
            if(arr[i][j]!=NULL) cout << arr[i][j];   
        }   
    }
    return 0;
}