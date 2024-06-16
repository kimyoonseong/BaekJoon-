#include <string>
#include <vector>
#include <iostream>
using namespace std;
string abba[]={"aya", "ye", "woo", "ma"};
int solution(vector<string> babbling) {
    int answer = 0;
    for(string s: babbling ){
        int flag=-1;
        int j=0;
        for(j=0; j<4;j++){
            cout<<"j값은"<<j<<endl;
            if(j==flag) {
                cout<<"연속돼서 넘깁니다"<<endl;
                continue;

            }//연속된 옹알이
            int pos=s.find(abba[j]);
            cout<<pos<<"<--pos"<<endl;
            if(pos==0){
                s.erase(pos,abba[j].size());
                flag=j;
                j=-1;
                cout<<s<<endl;
                cout<<j<<"<==j"<<endl;
               cout<<"--------------"<<endl;

            }
            else continue;


        }

        if(s.size()==0)answer++; 
    }
    return answer;
}