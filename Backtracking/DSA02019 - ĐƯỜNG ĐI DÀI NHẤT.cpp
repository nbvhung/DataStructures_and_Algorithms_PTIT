#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> ke[101];
int n, m, ans = -1e9;
bool used[101][101];

void dfs(int u, int len){
    ans = max(ans, len);
    for(int v : ke[u]){
        if(!used[u][v]){
            used[u][v] = used[v][u]= true;
            dfs(v, len+1);
            used[u][v] = used[v][u] = false;
        }
    }
}

void solve(){
    memset(ke, 0, sizeof(ke));
    memset(used, 0, sizeof(used));
    ans = -1e9;
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        int x, y; cin>>x>>y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for(int i=1; i<=n; i++){
        dfs(i, 0);
    }
    cout<<ans;
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
