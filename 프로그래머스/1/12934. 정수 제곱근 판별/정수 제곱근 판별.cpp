#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
     long long sqrt_n = sqrt(n);
    if((sqrt_n*sqrt_n)!=n){
        answer=-1;
    }
    else {
        long long next = sqrt_n + 1;
        answer = next * next;
    }
    return answer;
}