#include <string>
#include <vector>
#include <iostream>

using namespace std;

int boundaryCheck(vector<string>park,int direction, int move); //park, 방향, 이동횟수

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
   
    int y =0, x= 0; //시작 좌표설정
    int mapY = park.size(); //맵 y크기
    int mapX = park[0].size(); //맵 x크기
   
    for(int i  = 0; i < mapY;i++){
        for(int j = 0; j < mapX;j++){
            if(park[i][j] == 'S'){
                y=i;
                x=j;
            }
        }
    }
   
    for(int i = 0; i < routes.size();i++){
        int step = (routes[i][2] - '0'); // step의 크기
        int cantMove = 0; // 움직이지 못하면 1 가능 -> 0
        char route= routes[i][0];
        
        if(route=='E'){
            bool flag = true;
            for(int j=1; j<=step; j++){
                if(x + j >= mapX){   // 맵 밖
                    flag = false;
                    break;
                }

                if(park[y][x + j] == 'X'){   // 장애물
                    flag = false;
                    break;
                }
            }  
            if(flag){
                park[y][x+step]='S';
                park[y][x]='O';
                x+=step;
            }
           
        }
        else if(route =='S'){
           bool flag = true;
            for(int j=1; j<=step; j++){
                if(y + j >= mapY){   // 맵 밖
                    flag = false;
                    break;
                }

                if(park[y+j][x] == 'X'){   // 장애물
                    flag = false;
                    break;
                }
            }  
            if(flag){
                park[y+step][x]='S';
                park[y][x]='O';
                y+=step;
            }
         }
         else if(route =='W'){
            bool flag = true;
            for(int j=1; j<=step; j++){
                if(x - j < 0){   // 맵 밖
                    flag = false;
                    break;
                }

                if(park[y][x - j] == 'X'){   // 장애물
                    flag = false;
                    break;
                }
            }  
            if(flag){
                park[y][x-step]='S';
                park[y][x]='O';
                x-=step;
            }
         }
         else if(route =='N'){
           bool flag = true;
            for(int j=1; j<=step; j++){
                if(y - j < 0){   // 맵 밖
                    flag = false;
                    break;
                }

                if(park[y-j][x] == 'X'){   // 장애물
                    flag = false;
                    break;
                }
            }  
            if(flag){
                park[y-step][x]='S';
                park[y][x]='O';
                y-=step;
            }
         }
        
    }
   
    answer.push_back(y);
    answer.push_back(x);
    return answer;
}
