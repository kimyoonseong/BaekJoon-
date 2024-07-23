#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <deque>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    
    deque<string> Cached;

    for(int i = 0; i < cities.size(); i++)
    {
        transform(cities[i].begin(), cities[i].end(), cities[i].begin(), ::tolower);
        bool bCached = false;
        int CacheHitIndex = -1;

        for(int j = 0; j < Cached.size(); j++)
        {
            if(Cached[j] == cities[i])
            {
                bCached = true;
                CacheHitIndex = j;
                break;
            }
        }

        if(bCached)
        {
            ++answer;
            string CacheHit = Cached[CacheHitIndex];
            Cached.erase(Cached.begin() + CacheHitIndex);
            Cached.push_back(CacheHit);
        }
        else
        {
            answer += 5;

            Cached.push_back(cities[i]);
            if(Cached.size() > cacheSize)
            {
                Cached.pop_front();
            }
        }
    }

    return answer;
}