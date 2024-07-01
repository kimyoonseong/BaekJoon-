#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    int top;
    int bottom;
    for(long long i=left; i<right+1; i++){
        top=i/n;//행
        bottom=i%n;//열
        if(top>=bottom+1){
            bottom+=top-bottom;
        }
        answer.push_back(bottom+1);
    }
    return answer;
}