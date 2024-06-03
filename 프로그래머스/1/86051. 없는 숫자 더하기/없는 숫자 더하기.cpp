#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int arr[10]={0,};
    int size = sizeof(arr) / sizeof(int);
    for(int i: numbers) arr[i]++;
    for(int i=0; i< size; i++){
        cout<<arr[i]<<endl;
        if(arr[i]==0){
            answer+=i;
        }
    }
    return answer;
}