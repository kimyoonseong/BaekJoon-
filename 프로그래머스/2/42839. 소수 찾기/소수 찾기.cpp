#include <string>
#include <vector>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <unordered_map>
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false; 

    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true;
}

int solution(string numbers) {
    int answer = 0;
    unordered_set<int> nums;
    //vector<int> v;중복허용하면 안됨
    sort(numbers.begin(), numbers.end());
    do{
        for(int i=1; i<=numbers.size(); ++i){
            string temp = numbers.substr(0, i);
            int num_temp = stoi(temp); 
            if(isPrime(num_temp)) nums.insert(num_temp);//v.push_back(num_temp);중복허용 x
        }
       
    }while(next_permutation(numbers.begin(),numbers.end()));
    //for(auto i: v) cout<<i<<endl;
    return nums.size(); 
}
