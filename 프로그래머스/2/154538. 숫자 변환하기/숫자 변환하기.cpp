#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int a,b;
bool vis[1000001];
queue <pair<int,int>> q;

int solution(int x, int y, int n) {
    int answer = 0;
    if(x == y) return 0;
    q.push(make_pair(x,0));
    
    while(q.size()){
        tie(b,a)=q.front(); q.pop();//b=10 a=0

        if(b+n<=y&&!vis[b+n]){
            vis[b+n]=true;
            if(b+n==y) return a+1;
            q.push({b+n,a+1});
        }
        if(b*2<=y&&!vis[b*2]){
            vis[b*2]=true;
            if(b*2==y) return a+1;
            q.push({b*2,a+1});
        }
        if(b*3<=y&&!vis[b*3]){
            vis[b*3]=true;
            if(b*3==y) return a+1;
            q.push({b*3,a+1});
        }

    }
    return -1;
}