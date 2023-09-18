#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string c;
	getline(cin,c);
	for(int i=0; i<c.size(); i++){
		if(c[i]>=65&&c[i]<=90 ){
			c[i]+=13;
			if(c[i]>90)
			c[i]-=26;
		}
		if(c[i]>=97&& c[i]<=122){
			if(c[i]<=109)
				c[i]+=13;
			else if(c[i]>109)
				c[i]-=13;	
		}
	}
	cout<<c;
	return 0;
}