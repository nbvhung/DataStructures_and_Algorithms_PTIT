#include <bits/stdc++.h>
using namespace std;

bool used[1001];
vector<int> ke[1001];
int parent[1001];

void DFS(int u){
    used[u] = true;
    for(int v : ke[u]){
        if(!used[v]){
            parent[v] = u;
            DFS(v);
        }
    }
}


void solve(){
    int n, m, s, t; cin>>n>>m>>s>>t;
    for(int i=1; i<=m; i++){
        int x, y; cin>>x>>y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    DFS(s);
    if(used[t]){
        vector<int> res;
        while(t != s){
            res.push_back(t);
            t = parent[t];
        }
        res.push_back(t);
        reverse(res.begin(), res.end());
        for(int x : res) cout<<x<<" ";
    }
    else cout<<-1;
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
