#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<string> wallpaper) {
//    vector<int> answer;
//    bool flag=true;
//     for(int i=0; i<wallpaper.size(); i++){
//         for(int j=0; j<wallpaper[i].size();j++){
//            if(wallpaper[i][j]=='#'){
//                answer.push_back(i);
//                flag=false;
//                break;
//            }
//         }
//         if(flag==false) break;
//     }
//     int min=21470000;
//      for(int i=0; i<wallpaper.size(); i++){
//         for(int j=0; j<wallpaper[i].size();j++){
//            if(wallpaper[i][j]=='#'){
//                if(j<min) min=j;
//            }
//         }
//     }
//     answer.push_back(min);
//     bool flag2=true;
//     for(int i=wallpaper.size()-1; i>=0; i--){
//          for(int j=wallpaper[i].size(); j>=0; j--){
//              if(wallpaper[i][j]=='#'){
//                answer.push_back(i+1);
//                flag2=false;
//                break;
//              cout<<i;
//             }
              
//         }
//         //cout<<"\n";
//          if(flag2==false) break;
//     }
     
  
//     int max=-21470000;
     
//      for(int i=0; i<wallpaper.size(); i++){
//         for(int j=0; j<wallpaper[i].size();j++){
//            if(wallpaper[i][j]=='#'){
//                if(j>max) max=(j+1);
//            }
//         }
//     }
//     answer.push_back(max);
    
    vector<int> answer;
    int xy[4] = {51,51,0,0};
    for(int i=0;i<wallpaper.size();i++)
    {
        for(int j=0;j<wallpaper[i].size();j++)
        {
            if(wallpaper[i][j] == '#')// 파일일때
            {
                xy[0] = min(xy[0], i);// lux
                xy[1] = min(xy[1], j);// luy
                xy[2] = max(xy[2], i+1);// rdx
                xy[3] = max(xy[3], j+1);// rdy
            }
        }
    }
    for(int i=0;i<4;i++) answer.push_back(xy[i]);
    return answer;
}