#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {
    int arr[1004] = {0};  
    for(auto i: array){
        arr[i]++;  
    }

    int max = -1;
    int mode_value = -1;
    bool is_duplicate = false;

    for(int i = 0; i < 1004; i++){
        if(arr[i] > max) {
            max = arr[i];
            mode_value = i;
            is_duplicate = false;  
        } else if(arr[i] == max && arr[i] != 0) {
            is_duplicate = true;  // 동일한 최대 빈도를 가진 다른 요소가 있으면 중복 플래그 설정
        }
    }

    if(is_duplicate) {
        return -1;  // 여러 개의 최빈값이 있으면 -1 반환
    } else {
        return mode_value;  // 최빈값 반환
    }
}
