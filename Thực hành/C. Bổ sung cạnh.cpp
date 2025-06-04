#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> ke[100001];
int n, m, cnt=0;
bool used[100001];

void dfs(int u){
    cnt++;
    used[u] = true;
    for(int v : ke[u]){
        if(!used[v]){
            dfs(v);
        }
    }
}

void solve(){
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        int x, y; cin>>x>>y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    cnt = 0;
    dfs(1);
    int sz_1 = cnt;
    cnt = 0;
    int max_sz = 0;
    for(int i=1; i<=n; i++){
        if(!used[i]){
            cnt = 0;
            dfs(i);
            max_sz = max(max_sz, cnt);
        }
    }
    cout<<sz_1 + max_sz;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t=1;
    while(t--){
        solve();
        cout<<'\n';
    }
    return 0;
}
