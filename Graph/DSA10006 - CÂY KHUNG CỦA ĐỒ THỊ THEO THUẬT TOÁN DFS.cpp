#include <bits/stdc++.h>
using namespace std;

int n, m, st;
vector<int> ke[100001];
bool used[100001];
vector<pair<int, int>> res;

void dfs(int u){
    used[u] = true;
    for(int v : ke[u]){
        if(!used[v]){
            res.push_back({u, v});
            dfs(v);
        }
    }
}

void solve(){
    memset(ke, 0, sizeof(ke));
    memset(used, 0, sizeof(used));
    res.clear();
    cin>>n>>m>>st;
    for(int i=1; i<=m; i++){
        int x, y; cin>>x>>y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    dfs(st);
    if(res.size() != n-1){
        cout<<-1; return;
    }
    for(auto it : res){
        cout<<it.first<<" "<<it.second<<endl;
    }
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
