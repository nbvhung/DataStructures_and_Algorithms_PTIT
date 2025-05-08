#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> adj[1001];
int n, m, st; 

void nhap(){
    cin>>n>>m>>st;
    for(int i=1; i<=m; i++){
        int x, y, w; cin>>x>>y>>w;
        adj[x].push_back({y, w});
        adj[y].push_back({x, w});
    }
}

void Dijkstra(int s){
    vector<int> d(n+1, 1e9);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
    q.push({0, s});
    d[s] = 0;
    while(!q.empty()){
        pair<int, int> x = q.top(); q.pop();
        int u = x.second, kc = x.first;
        if(kc > d[u]) continue;
        for(auto [v, w] : adj[u]){
            if(d[v] > d[u] + w){
                d[v] = d[u] + w;
                q.push({d[v], v});
            }  
        }
    }
    for(int i=1; i<=n; i++){
        cout<<d[i]<<" ";
    }
}

void solve(){
    memset(adj, 0, sizeof(adj));
    nhap();
    Dijkstra(st);
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}