#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    for(int i=0; str[i]!='\0';i++){
        
        if((str[i]<91)&& (str[i]>64)){
            str[i]=(str[i]+32);
        }
        else if((str[i]<123)&& (str[i]>96)){
            str[i]=(str[i]-32);
        }
        
    }
    cout<<str;
    return 0;
}