#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<string> croatian = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    int idx;
    string str;
    cin >> str;
    for(auto it: croatian)
    {
        while(1){
            idx = str.find(it);
            if(idx == string::npos)
                break;
            str.replace(idx,it.length(),"!");
        }
    }
    cout << str.length();
}