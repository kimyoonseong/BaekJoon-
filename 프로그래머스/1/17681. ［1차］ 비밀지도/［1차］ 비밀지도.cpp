#include <string>
#include <vector>
#include<algorithm>  
#include <string>
#include <iostream>
using namespace std;

string trans(int num,int k){
    string temp;
    while(num>0){
        if (num % 2 == 1) // 나머지가 1
            temp.append("1");
        else			// 나머지가 0
            temp.append("0");
  
        num/= 2; 		
    }
    while(temp.length()<k){
        temp.append("0");
    }
    return temp;
}
vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for(int i=0; i<n; i++){
        string a=trans(arr1[i],n);
        string b=trans(arr2[i],n);
        cout<<a<<"\n"<<b<<"\n";
        string c;
        for(int j=0; j<n; j++){
            if(a[j]=='0'&&b[j]=='0'){
                c.append(" ");
            }
            else c.append("#"); 
                
       }
        reverse(c.begin(),c.end());
        answer.push_back(c);
    }
    return answer;
}