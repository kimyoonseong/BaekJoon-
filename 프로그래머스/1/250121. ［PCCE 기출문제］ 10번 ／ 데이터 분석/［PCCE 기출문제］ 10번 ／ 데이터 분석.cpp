
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int sort_intager = 0;

bool cmp(vector<int> v1, vector<int> v2)
{
    return v1[sort_intager] < v2[sort_intager];
}

int string_handler(string str)
{
    if(str == "code")
    {
        return 0;
    }
    else if(str == "date")
    {
        return 1;
    }
    else if(str == "maximum")
    {
        return 2;
    }
    else if(str == "remain")
    {
        return 3;
    }
}

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) 
{
    vector<vector<int>> answer;
    for(int i=0; i<data.size(); i++)
    {
        if(data[i][string_handler(ext)] <= val_ext)
            answer.push_back(data[i]);
    }
    sort_intager = string_handler(sort_by);
    sort(answer.begin(),answer.end(),cmp);

    return answer;
}