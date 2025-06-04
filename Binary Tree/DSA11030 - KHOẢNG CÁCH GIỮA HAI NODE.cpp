#include<bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> ke[1001];
int n, parent[1001], sz[1001];

void dfs(int u){
    for(int v : ke[u]){
        parent[v] = u;
        sz[v] = sz[u] + 1;
        dfs(v);
    }
}

void solve(){
    cin>>n;
    for(int i=0; i<=n; i++){
        parent[i] = i;
        sz[i] = 0;
        ke[i].clear();
    }
    for(int i=0; i<n-1; i++){
        int x, y; cin>>x>>y;
        ke[x].push_back(y);
    }
    dfs(1);
    int q; cin>>q;
    while(q--){
        int res = 0;
        int x, y; cin>>x>>y;
        while(sz[x] > sz[y]){
            x = parent[x];
            res++;
        }
        while(sz[y] > sz[x]){
            y = parent[y];
            res++;
        }
        if(x == y) cout<<res<<'\n';
        else{
            while(1){
                res+=2;
                if(parent[x] == parent[y]) break;
                x = parent[x];
                y = parent[y];
            }
            cout<<res<<'\n';
        }
    }
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