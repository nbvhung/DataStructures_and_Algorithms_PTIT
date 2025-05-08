#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> ke[100005];
int vis[100005];
bool ok;

bool dfs(int u){
    vis[u] = 1;
    for(int v : ke[u]){
        if(vis[v] == 0){
            if(dfs(v)) return true;
        }
        else if(vis[v] == 1) return true;
    }
    vis[u] = 2;
    return false;
}

void solve(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        ke[i].clear();
        vis[i] = 0;
    }
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        ke[x].push_back(y); 
    }
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            if(dfs(i)){
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
}
