#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> players, int m, int k) {
    int answer = 0;
    int tmp=0; 
   vector<int> arr(24 + k, 0);
    for(int i=0; i<players.size(); i++){
        if(arr[i]!=0){
            tmp-=arr[i];
        }
        if(players[i]>=tmp*m+m) { 
            answer+=(players[i]-(tmp*m))/m; 
            arr[i+k] +=(players[i]-(tmp*m))/m;
            tmp+=(players[i]-(tmp*m))/m;   
        }
        
       // cout<<"회차 : " <<i  <<"현재 증설된 tmp: " <<tmp << " answer: "<<answer<<endl;
    }
    
    return answer;
}