#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int remainder = 0;
    
    while (n!=0) {
        remainder = n % 3;
        n = n / 3;

        if (remainder == 0) { //나누어 떨어질 경우 몫을 1빼준다.
            answer = "4" + answer;
            n--;
        }
        else if (remainder == 1) {
            answer = "1" + answer;
        }
        else if (remainder == 2) {
            answer = "2" + answer;
        }
    }

    return answer;
}