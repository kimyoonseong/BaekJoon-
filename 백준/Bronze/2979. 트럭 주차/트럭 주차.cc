#include <iostream>
using namespace std;

int main(){
	int A,B,C;
	cin>>A>>B>>C;
	int a[104]={0,},sum=0;
		int arr,dep;
	for(int i=0; i<3; i++){
	
		cin>> arr>>dep;
		for(int i=arr; i<dep; i++){//나갈땐 포함하면안돼.. 
			a[i]++;	
		}
	}
	/*for(int i=0; i<10; i++){
		cout<<a[i]<<" ";	
	}
	*/
	for(int i=1; i<100; i++){
		if(a[i]){
			if(a[i]==1){sum+=1*A;}
			else if(a[i]==2){sum+=2*B;}
			else if(a[i]==3){sum+=3*C;}
		}
	}
	cout<<sum;
 	return 0;
}