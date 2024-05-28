#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool prime(int sum){
    for(int i=2; i*i<=sum; i++){
        if(sum%i==0){
            return false;
        }
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    int n = nums.size();
    vector<bool> v(n);
    fill(v.end() - 3, v.end(), true); // 마지막 3개의 요소를 true로 설정
    
    do {
        int sum = 0;
        for(int i = 0; i < n; i++) {
            if (v[i]) {
                sum += nums[i];
                //cout << nums[i] << " ";
            }
        }
        //cout << "sum: " << sum << "\n";
        
        if(prime(sum)) answer++;
    } while(next_permutation(v.begin(), v.end()));
    
    return answer;
}