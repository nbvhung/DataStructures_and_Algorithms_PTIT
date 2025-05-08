#include<bits/stdc++.h>
using namespace std;

int n, m;
int parent[1001], sz[1001];

int Find(int u){
    if(u == parent[u]) return u;
    return parent[u] = Find(parent[u]);
}

bool Union(int u, int v){
    u = Find(u);
    v = Find(v);
    if(u == v) return false;
    if(sz[u] < sz[v]) swap(u, v);
    sz[u] += sz[v];
    parent[v] = u;
    return true;
}

void solve(){
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        parent[i] = i;
        sz[i] = 1;
    }
    bool ok = false;
    for(int i=1; i<=m; i++){
        int x, y;
        cin>>x>>y;
        if(!Union(x, y)){
            ok = true;
        }
    }
    cout<<(ok==true ? "YES" : "NO");
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}