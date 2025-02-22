#include <bits/stdc++.h>
using namespace std;

bool used[1001];
vector<int> ke[1001];

void BFS(int u){
    queue<int> q;
    q.push(u);
    used[u] = true;
    while(!q.empty()){
        int x = q.front(); q.pop();
        cout<<x<<" ";
        for(int v : ke[x]){
            if(!used[v]){
                q.push(v); 
                used[v] = true;
            }
        }
    }
}

void solve(){
    int n, m, u; cin>>n>>m>>u;
    for(int i=1; i<=m; i++){
        int x, y; cin>>x>>y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for(int i=1; i<=n; i++) sort(ke[i].begin(), ke[i].end());
    memset(used, false, sizeof(used));
    BFS(u);
    memset(ke, 0, sizeof(ke));
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
