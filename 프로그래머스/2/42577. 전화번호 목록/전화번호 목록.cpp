#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool solution(vector<string> phone_book) {
   bool answer = true;
    
    sort(phone_book.begin(), phone_book.end());
 
    for (int i = 0; i < phone_book.size() - 1; i++) 
        if(phone_book[i]==phone_book[i+1].substr(0,phone_book[i].size()))
            return false;    
    
    return answer;
}
 // unordered_map<string,bool> mp;
 //    for(string s : pBook) mp[s] = true; // s가 mp에 존재
 //    for(int i = 0; i < pBook.size(); i++){
 //        string curNumber = pBook[i];
 //        string tempNumber = "";
 //        for(int j = 0; j < pBook.size(); j++){
 //            tempNumber += curNumber[j];
 //            if(mp[tempNumber] && tempNumber != curNumber) return false;
 //        }
 //    }