#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    vector<int> v(n);
    fill(v.begin(), v.end(),1);
    for(int i: section) v[i-1]=0;

    for(int i=0; i<v.size();i++){
        if(v[i]==0){
           
            for(int j=0; j<m; j++){
                if((j+i)>=v.size())break;
                v[j+i]=1;//페인트 칠하기
                
            }
            //for(int i: v)cout<<i;
            //cout<<"끝------------------"<<endl;
            answer++;
        }
    }
    
    return answer;
}