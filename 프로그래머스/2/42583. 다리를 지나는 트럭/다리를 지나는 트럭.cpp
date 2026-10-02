#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;
int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int time = 0;
    queue<int> que;
    int weight_sum = 0; //다리위 트럭 총 무게
    int i = 0;
    while(true){
    	int now_weight = truck_weights[i];
        
        if(i==truck_weights.size()){//마지막 트럭은 다리길이만큼 시간걸리니까;
            time+= bridge_length;
            break;
        }
        
        if(que.size()==bridge_length){//다리에서 내리자잉
            int tmp = que.front();
            weight_sum-= tmp;// 하중된 무게에서 빼주기
            //cout<<"tmp: "<< tmp<<endl;
            que.pop();         
        }
        
        if(weight_sum+now_weight<=weight){//현재 차 무게가 추가되어도 무게한도 이하면
            weight_sum+=now_weight ;          
            que.push(now_weight);
            i++;
        }
        else que.push(0);//한도초과면 0kg push
        
        time++;
    }
    return time;
}