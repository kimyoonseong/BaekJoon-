#include <iostream>
 
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    double divide = 0, totalscore = 0;
    for (int i = 0; i < 20; ++i)
    {
        string name;
        cin >> name;
 
        double score;
        cin >> score;
 
        string grade;
        cin >> grade;
 
        if (grade == "P")
            continue;
        else if (grade == "A+")
        {
            totalscore += score * 4.5;
            divide += score;
        }
        else if (grade == "A0")
        {
            totalscore += score * 4.0;
            divide += score;
        }
        else if (grade == "B+")
        {
            totalscore += score * 3.5;
            divide += score;
        }
        else if (grade == "B0")
        {
            totalscore += score * 3.0;
            divide += score;
        }
        else if (grade == "C+")
        {
            totalscore += score * 2.5;
            divide += score;
        }
        else if (grade == "C0")
        {
            totalscore += score * 2.0;
            divide += score;
        }
        else if (grade == "D+")
        {
            totalscore += score * 1.5;
            divide += score;
        }
        else if (grade == "D0")
        {
            totalscore += score * 1.0;
            divide += score;
        }
        else if (grade == "F")
        {
            divide += score;
        }
 
    }
 
    double ans = totalscore / divide;
    cout << ans;
 
    return 0;
}