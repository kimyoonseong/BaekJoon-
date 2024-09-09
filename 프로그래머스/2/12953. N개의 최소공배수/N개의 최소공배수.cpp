#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int Gcd(int a,int b){
    int A= max(a,b);
    int B= min(a,b);
    int temp;
    while(A%B!=0){
        temp=A%B;
        A=B;
        B=temp;
    }
    return B;
}
int solution(vector<int> arr) {
    int answer = arr[0];
    for(int i = 1; i < arr.size(); i++)
    {
        int GCD = Gcd(answer, arr[i]);
        int LCM = answer * arr[i] / GCD;
        answer = LCM;
    }
    return answer;
}


