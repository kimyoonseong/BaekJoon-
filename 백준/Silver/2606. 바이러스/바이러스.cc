#include <iostream>
#include <vector>
#include <string.h>
#include <queue>
#include <algorithm>
using namespace std;
int cnt=0;
vector<int> vec[102];
bool visit[102];

 
void dfs(int x){
    visit[x] = true;
    cnt++;
	for(int i: vec[x]){
		if(!visit[i]){
			dfs(i);
		}
	}


}
int main(){
	    ios_base::sync_with_stdio(false); // C 표준 입출력과 C++ 입출력의 동기화 해제
    cin.tie(); // cin과 cout의 묶음을 풀어줌 (입출력 독립적 수행)
    cout.tie();
    int n, m,  a, b;
    cin >> n ;
	cin>>m;
 	
    for (int i = 1; i <= m;i++){
        cin >> a >> b;
        vec[a].push_back(b); 
        vec[b].push_back(a); 
    }
	fill(&visit[0], &visit[0]+102,0);
    //memset(visit, false, sizeof(visit));
    dfs(1);
	cout<<cnt-1;
    
    return 0;
}
