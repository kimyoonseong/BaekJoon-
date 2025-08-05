#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
int calculate_time(string in_time, string out_time) {
    int in_hour = stoi(in_time.substr(0, 2));
    int in_minute = stoi(in_time.substr(3, 2));
    int out_hour = stoi(out_time.substr(0, 2));
    int out_minute = stoi(out_time.substr(3, 2));
    return (out_hour * 60 + out_minute) - (in_hour * 60 + in_minute);
}

vector<int> solution(vector<int> fees, vector<string> records) {
    map<string, int> total_time;
    map<string, string> in_time;
    vector<int> result;

    for (string record : records) {
        stringstream ss(record);
        string time, car_number, type;
        ss >> time >> car_number >> type;//시간 //자동차번호// 입출차구분

        if (type == "IN") {
            in_time[car_number] = time;
        } else {
            int time_diff = calculate_time(in_time[car_number], time);//out일때 차이 계산
            total_time[car_number] += time_diff;//입출차 시간 계산해서 total_time에 저장
            in_time.erase(car_number);//계산완료했으니 제거
        }
    }
    for (auto const& [car_number, time] : in_time) {//입차만하고 출차 내역이 없는경우
        int time_diff = calculate_time(time, "23:59");
        total_time[car_number] += time_diff;
    }
    for(auto const& [car_number, time]: total_time){
        
        int k= fees[1];
        if(time<fees[0]){
            result.push_back(k);
        }
        else{            
            k+=(int)ceil((double)(time-fees[0])/fees[2])*fees[3];//소수단위 계산후 int형으로 반올림..
            result.push_back(k);    
        }
            
    }

    vector<pair<string, int>> fee_list;



    //sort(fee_list.begin(), fee_list.end()); // 차량 번호 기준 오름차순 정렬

    for (auto const& [car_number, cost] : fee_list) {
        result.push_back(cost);
    }

    return result;
}