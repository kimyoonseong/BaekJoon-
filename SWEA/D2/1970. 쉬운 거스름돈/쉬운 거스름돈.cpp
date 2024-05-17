#include<iostream>
 using namespace std;
int main()
{
    int test_case;
    int T;
   cin>>T;
    for(test_case = 1; test_case <= T; ++test_case)
    {
        int money[]={50000,10000,5000,1000,500,100,50,10};
        int num;
        cin>>num;
        cout<<"#"<<test_case<<endl;
        for(int i=0; i<8; i++){
            cout<<num/money[i]<<" ";
            
            num%=money[i];
        }
        printf("\n");
 
    }
    return 0;
}
