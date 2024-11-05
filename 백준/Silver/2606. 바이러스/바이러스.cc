#include <iostream>
#include <vector>
#include <string.h>
#include <queue>
#include <algorithm>
using namespace std;
int cnt=0;
vector<int> vec[10002];
bool visit[10002];

 
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
        vec[b].push_back(a); // 양방향 연결 추가
    }
	fill(&visit[0], &visit[0]+10002,0);
    //memset(visit, false, sizeof(visit));
    dfs(1);
	cout<<cnt-1;
    
    return 0;
}
