#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	stack <int> st;
	int n;
	cin>>n;
	while(n--){
		int m;
		cin>>m;
		switch(m)
		{
			case 1:
				int x;
				cin>>x;
				st.push(x);
				break;
			case 2:
				if(!st.empty()){
					printf("%d\n",st.top());
                    //cout<<st.top()<<"\n";
                    st.pop();
                }
				else{
                    //cout<<-1<<"\n";
                    printf("-1\n");
                }
                break;
			case 3:
					//cout<<st.size()<<"\n";
					printf("%d\n",st.size());
				break;
			case 4:
					if(st.empty()) printf("1\n");//cout<<1<<"\n";
					else printf("0\n");//cout<<0<<"\n";
				break;
			case 5:	
					if(!st.empty()) printf("%d\n",st.top());//cout<<st.top()<<endl;
					else  printf("-1\n");//cout<<-1<<endl;
				break;
		}
		
	}
	
	return 0;	
}