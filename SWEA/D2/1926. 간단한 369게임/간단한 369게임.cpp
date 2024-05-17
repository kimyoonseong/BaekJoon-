#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    
    for(int i = 1; i <= t; i++)
    {
        string s = to_string(i);
        bool check = true;
        int count = 0;
        
        for(int j = 0; j < s.size(); j++)
        {
            if(s[j] == '3' || s[j] == '6' || s[j] == '9')
            {
                count++;
                check = false;
            }
        }
        
        if(check)
            cout << i << " ";
        else
        {
            for(int j = 0; j < count; j++)
                cout << "-";
            cout << " ";
        }
    }
    return 0;
}