#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main() {
  
    int n, answer=0;
    
    cin>>n;
    
    for(int i=0; i<n; i++ ){
        map<char,int> m;
        string s;
        bool flag =true;
        cin>> s;

        for(int j=0; j<s.length(); j++){
            m[s[j]]++;
           
            if(m[s[j]]>1 && (s[j]!=s[j-1])) flag= false;
        }
     
        //cout<<"flag: "<< flag;
        if(flag==true) answer++;
            

    }
    
    cout<<answer;
    return 0;
}