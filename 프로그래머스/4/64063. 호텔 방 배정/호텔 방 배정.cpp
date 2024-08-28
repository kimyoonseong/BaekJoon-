#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<long long, long long> room; // key : 방 번호  value : 0 이면 빈방, a 이면 이 방은 빈방이 아니며 a 번 방으로 가라는 의미(업뎃 전 정보인 상태일 수 있음)
long long GetEmptyRoom(long long n)
{
    if (room[n] == 0) return n; 
    return room[n] = GetEmptyRoom(room[n]); 
}

vector<long long> solution(long long k, vector<long long> room_number){
    vector<long long> answer;

    for (auto num : room_number){
        long long emptyRoom  = GetEmptyRoom(num); 
        answer.push_back(emptyRoom);
        room[emptyRoom] = emptyRoom + 1; 
    }
    return answer;
}