#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> ke[100001];
int n, m, s, t;
bool used[100001];

void dfs(int u, int skip_z){
    used[u] = true;
    for(int v : ke[u]){
        if(v == skip_z) continue;
        if(!used[v]){
            dfs(v, skip_z);
        }
    }
}

void solve(){
    memset(ke, 0, sizeof(ke));
    memset(used, 0, sizeof(used));
    cin>>n>>m>>s>>t;
    for(int i=1; i<=m; i++){
        int x, y; cin>>x>>y;
        ke[x].push_back(y);
    }
    int cnt = 0;
    for(int z=1; z<=n; z++){
        if(z == s || z == t) continue;
        memset(used, 0, sizeof(used));
        dfs(s, z);
        if(!used[t]){
            cnt++;
        }
    }
    cout<<cnt;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
        cout<<'\n';
    }
    return 0;
}
