#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

int solution(vector<int> topping) {
     int answer = 0;
    map<int, int> a;
    map<int, int> b;

    for(int i = 0; i < topping.size(); i++)
    {
        b[topping[i]]++;
    }

    for(int i = 0; i < topping.size(); i++)
    {
        b[topping[i]]--;
        a[topping[i]]++;
        if(b[topping[i]]==0){
            auto it=b.find(topping[i]);
            if(it!=b.end()) b.erase(it);
            
        }
       //  if(b[topping[i]]==0){
       //     b.erase(topping[i]);
       //  }
        if(b.size()==a.size()) {
            
            answer++;
            //for(pair<int, int> it: a) cout<<it.first;

            //for(auto it: b) cout<<it.first;
       
        }
    }
    return answer;
}