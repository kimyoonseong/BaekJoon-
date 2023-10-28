#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
  
    sort(numbers.begin(),numbers.end());
    for(int i=0; i<numbers.size(); i++){
        for(int j=i+1; j<numbers.size(); j++){
            answer.push_back(numbers[i]+numbers[j]);
        }
    }
    /*
    do{
        int temp=0;
        for(int i=0; i<2; i++){
            temp+=numbers[i];
            //tmp[temp]++;
        }
       
        answer.push_back(temp);
        
        
    }while(next_permutation(numbers.begin(),numbers.end()));
    */
    sort(answer.begin(),answer.end());
    answer.erase(unique(answer.begin(),answer.end()),answer.end());
    return answer;
}