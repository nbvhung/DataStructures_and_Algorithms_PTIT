#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m, s, parent[1001];
vector<int> ke[1001];
bool used[1001];

void bfs(int u){
    queue<int> q;
    q.push(u);
    used[u] = true;

    while(!q.empty()){
        int x = q.front(); q.pop();
        for(int v : ke[x]){
            if(!used[v]){
                used[v] = true;
                parent[v] = x;
                q.push(v);
            }
        }
    }
}

void path(int i, int s){
    if(!used[i]){
        cout<<"No path";
    }
    else{
        vector<int> res;
        while(i != s){
            res.push_back(i);
            i = parent[i];
        }
        res.push_back(i);
        reverse(res.begin(), res.end());
        for(int x : res) cout<<x<<" ";
    }
    cout<<endl;
}

void solve(){
    memset(ke, 0, sizeof(ke));
    memset(parent, 0, sizeof(parent));
    memset(used, false, sizeof(used));
    cin>>n>>m>>s;
    for(int i=1; i<=m; i++){
        int x, y; cin>>x>>y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    bfs(s);
    for(int i=1; i<=n; i++){
        if(i == s) continue;
        path(i, s);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}