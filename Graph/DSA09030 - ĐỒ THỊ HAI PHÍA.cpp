#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> ke[10005];
int ok = 1, color[10005];

void dfs(int u, int c){
    color[u] = c;
    for(int v : ke[u]){
        if(!color[v]){
            dfs(v, 3-c);
        }
        else if(color[v] == color[u]){
            ok=0;
        }
    }
}

void solve(){
    memset(ke, 0, sizeof(ke));
    memset(color, 0, sizeof(color));
    ok = 1;
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        int x, y; cin>>x>>y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for(int i=1; i<=n; i++){
        if(!color[i]){
            dfs(i, 1);
        }
    }
    cout<<(ok ? "YES" : "NO");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--) {
        solve();
        cout<<endl;
    }
    return 0;
}