#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m; 
vector<int> ke[1005];
bool used[1005];
int parent[1001];

bool dfs(int u){
    used[u] = true;
    for(int v : ke[u]){
        if(used[v] && v != parent[u]) return true;
        if(!used[v]){
            parent[v] = u;
            if(dfs(v)) return true;
        }
    }
    return false;
}

void solve(){
    memset(ke, 0, sizeof(ke));
    memset(parent, 0, sizeof(parent));
    memset(used, false, sizeof(used));
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        int x, y; cin>>x>>y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for(int i=1; i<=n; i++){
        if(!used[i]){
            if(dfs(i)){
                cout<<"YES";
                return;
            }
        }
    }
    cout<<"NO";
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}