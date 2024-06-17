#include <string>
#include <vector>
#include <bits/stdc++.h>
#define MAX 10000001

using namespace std;



int solution(int k, vector<int> tangerine) {
    int answer = 0;
    vector<int> kind(MAX); // 각 귤의 종류의 개수를 담은 벡터
    
    // 각 귤의 종류의 개수 세기
    for (int t: tangerine) {
        kind[t]++;
    }
    
    // 종류가 많은 귤부터 담기 위해 내림차순 정렬
    sort(kind.rbegin(), kind.rend());
    for(int i=0; i<kind.size(); i++){
        
        if(k>kind[i]){
            answer++;
            k-=kind[i];
        }
        else{
            answer++;
            break;
        }
    }
    return answer;
}