#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int> ke[100001];
bool visited[100001];
int cnt = 0, res=0;

void dfs(int u){
    cnt++;
    visited[u] = true;
    for(int v : ke[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        memset(ke, 0, sizeof(ke));
        memset(visited, false, sizeof(visited));
        cnt = res = 0;
        cin>>n>>m;
        for(int i=1; i<=m; i++){
            int x,y; cin>>x>>y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        for(int i=1; i<=n; i++){
            if(!visited[i]){
                cnt = 0;
                dfs(i);
                res = max(res, cnt);
            }
        }
        cout<<res<<endl;
    }
}