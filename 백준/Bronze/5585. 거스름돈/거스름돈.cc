#include <bits/stdc++.h>
using namespace std;
int n;
int a[]={500,100,50,10,5,1};
int main(){
 	cin>>n;
 	int temp=1000-n;
 	int cnt=0;
 	//while(true){
 		for(int i=0; i<6; i++){
 			if(temp>=a[i]) {
 				cnt++;
				temp-=a[i];
			 	i--;
			}
			
 		}
 		cout<<cnt;
 	//}
	return 0;
}