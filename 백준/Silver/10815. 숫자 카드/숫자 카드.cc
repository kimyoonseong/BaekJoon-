#include<iostream>
#include<algorithm>

using namespace std;

int main(){
   	ios::sync_with_stdio(false);  // C++의 표준 입출력을 C 표준 입출력과 비동기화하여 성능 향상
    cin.tie(NULL);                // cin과 cout의 연결을 끊어서 입출력 성능을 높임
    int M, N, num;

    cin >> M;
    int arr[M];
    for(int i = 0; i < M; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr + M);

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> num;
        if(binary_search(arr, arr + M, num)){
            cout << '1' << ' ';
        }
        else{
            cout << '0' << ' ';
        }
    }
}