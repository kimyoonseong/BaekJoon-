#include <iostream>
#include <string>

using namespace std;

int main() {
  string line;
  while (getline(cin, line)) {
    cout << line << endl;
  }
  

}
//#include <iostream>
//using namespace std;
//
//int main() {
//    char str[10];
//    cout << "문자열 입력: ";
//    cin.getline(str, 10); // 최대 99자까지 읽고 마지막에 '\0' 추가
//    cout << "입력된 문자열: " << str << endl;
//}