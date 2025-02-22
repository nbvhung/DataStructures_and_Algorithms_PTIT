#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> ke[1001];
int used[1001];

void DFS(int u){
    used[u] = 1;
    for(int v : ke[u]){
        if(!used[v]){
            DFS(v);
        }
    }
}

int tplt(){
    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(!used[i]){
            cnt++;
            DFS(i);
        }
    }
    return cnt;
}

void solve(){
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        int x, y; cin>>x>>y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    int cnt = tplt();
    for(int i=1; i<=n; i++){
        memset(used, 0, sizeof(used));
        used[i] = 1;
        if(cnt < tplt()){
            cout<<i<<" ";
        }
    }
    memset(used, 0, sizeof(used));
    memset(ke, 0 ,sizeof(ke));
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
