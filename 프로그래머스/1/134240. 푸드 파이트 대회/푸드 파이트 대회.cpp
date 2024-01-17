#include <string>
#include <vector>
#include <iostream>
using namespace std;
string solution(vector<int> food) {
    string answer = "";
    string left="";
    string right="";
    for(int i=1; i<food.size();i++){
        int cnt=food[i]/2;
        if(cnt>0){
            for(int j=0; j<cnt; j++){
                left=left+to_string(i);
                right=to_string(i)+right;
                //answer.push_back((char)(i+48));  
            }
        }
    }
//    answer.push_back((char)(48));
/*    
    for(int i=food.size(); i>0;i--){
        int cnt=food[i]/2;
        if(cnt>0){
            for(int j=0; j<cnt; j++){
                    answer.push_back((char)(i+48));  
                }
        }
    }
 */
    answer=left+"0"+right;
    return answer;
}