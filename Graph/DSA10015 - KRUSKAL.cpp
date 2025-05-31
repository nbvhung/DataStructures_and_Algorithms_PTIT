#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct canh{
    int x, y, w;
};

int n, m;
vector<canh> dsc;
int parent[10001], sz[10001];

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

bool cmp(canh a, canh b){
    return a.w < b.w;
}

void Kruskal(){
    sort(dsc.begin(), dsc.end(), cmp);
    ll d = 0;
    vector<canh> tree;
    for(int i=0; i<m; i++){
        if(tree.size() == n-1) break;
        canh e = dsc[i];
        if(Union(e.x, e.y)){
            d += e.w;
            tree.push_back(e);
        }
    }
    cout<<d;
}

void solve(){
    dsc.clear();
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        parent[i] = i;
        sz[i] = 1;
    }
    for(int i=1; i<=m; i++){
        int x, y, w; cin>>x>>y>>w;
        dsc.push_back({x, y, w});
    }
    Kruskal();
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
