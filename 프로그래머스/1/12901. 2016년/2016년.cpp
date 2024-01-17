#include <string>
#include <vector>
#include <iostream>
using namespace std;
string check(int yoil){
    string answer="";
    if(yoil==1){answer="FRI";}
        else if(yoil==2){answer="SAT";}
        else if(yoil==3){answer="SUN";}
        else if(yoil==4){answer="MON";}
        else if(yoil==5){answer="TUE";}
        else if(yoil==6){answer="WED";}
        else if(yoil==0){answer="THU";}
    return answer;
}
string solution(int a, int b) {
    string answer = "";
    int date=0;
    for(int i=1;i<=12; i++){
        if(i==2){
            if(a==i){
                int yoil=(date+b)%7;
                answer=check(yoil);  
            }
             date+=29;
        }
        else if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
            if(a==i){
                int yoil=(date+b)%7;
                answer=check(yoil);
            }
            date+=31;
        }
        else{
            if(a==i){
                int yoil=(date+b)%7;
                answer=check(yoil);
            }
            date+=30;
        }
            
    }
    return answer;
}