#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> ke[1005];
int trc1[1005], trc2[1005];
bool vis[1005];

void dfs(int u){
    vis[u] = 1;
    for(int v : ke[u]){
        if(!vis[v]){
            trc1[v] = u;
            dfs(v);
        }
    }
}

void bfs(){
    queue<int> q;
    q.push(1);
    vis[1] = 1;
    while(q.size()){
        int u = q.front(); q.pop();
        for(int v : ke[u]){
            if(!vis[v]){
                vis[v] = 1;
                trc2[v] = u;
                q.push(v);
            }
        }
    }
}

void inpath(int u, int trc[], bool ok){
    vector<int> path;
    while(u){
        path.push_back(u);
        u = trc[u];
    }
    if(path.back() != 1){
        cout << -1 << '\n';
        return;
    }
    if(ok) reverse(path.begin(), path.end());
    for(int x : path) cout << x << ' ';
    cout << '\n';
}

int main(){
    cin >> n >> m;
    while(m--){
        int u, v;
        cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
    memset(vis, 0, sizeof(vis));
    dfs(1);
    memset(vis, 0, sizeof(vis));
    bfs();
    for(int i = 2; i <= n; i++){
        inpath(i, trc1, true);
        inpath(i, trc2, false);
    }
}
