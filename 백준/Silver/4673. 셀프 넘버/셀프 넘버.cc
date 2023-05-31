#include <iostream>
using namespace std;
int self_numcheck(int number){
	int sum=number;
	while(number!=0){
		sum=sum+(number%10);
		number=number/10;	
	}
	return sum;
}
int main(){
	bool A[10001]={false,};
	for(int i=1;i<=10000;i++){
		
		
		int k=self_numcheck(i);
		
		if(k<10001){
			A[k]=true;
		}
		if(A[i]!=true){
			cout<<i<<endl;	
		}
	}
	
	
	return 0;	
}