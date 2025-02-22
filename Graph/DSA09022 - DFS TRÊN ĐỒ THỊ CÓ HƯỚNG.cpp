#include <bits/stdc++.h>
using namespace std;

bool used[1001];
vector<int> ke[1001];

void DFS(int u){
    used[u] = true;
    cout<<u<<" ";
    for(int v : ke[u]){
        if(!used[v]){
            DFS(v);
        }
    }
}

void solve(){
    int n, m, u; cin>>n>>m>>u;
    for(int i=1; i<=m; i++){
        int x, y; cin>>x>>y;
        ke[x].push_back(y);
    }
    DFS(u);
    memset(used, false, sizeof(used));
    memset(ke, 0, sizeof(ke));
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
