#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    for(int i=0; i<photo.size(); i++){
        int res=0;
        for(int j=0; j<photo[i].size();j++){
            for(int k=0; k<name.size(); k++){
                if(photo[i][j]==name[k]){
                res+=yearning[k];
            }
            }
            // if(photo[i][j]==name[j]){
            //     res+=yearning[j];
            // }
                
        }
        answer.push_back(res);
    }
    return answer;
}