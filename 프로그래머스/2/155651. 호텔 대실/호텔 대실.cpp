#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> book_time)
{
    int answer = 0;
    vector <int> v(2410);
    int n = book_time.size();
    for(int i=0;i<n;i++)
    {
        int s = stoi(book_time[i][0].substr(0,2))*100 + stoi(book_time[i][0].substr(3));
        int e = stoi(book_time[i][1].substr(0,2))*100 + stoi(book_time[i][1].substr(3))+10;// 10분간 청소
        if (e%100>= 60) e+=40;
        
        for(int j=s; j<e; j++){
           
            v[j]++;
        }
    }
     for(int i=0;i<2410;i++) answer = max(answer, v[i]);
    
    return answer;
}