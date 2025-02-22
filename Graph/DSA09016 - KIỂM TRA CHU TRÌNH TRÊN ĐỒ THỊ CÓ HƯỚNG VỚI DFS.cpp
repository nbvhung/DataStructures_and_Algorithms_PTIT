#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m; 
vector<int> ke[1005];
int color[1001];

bool dfs(int u){
    color[u] = 1;
    for(int v : ke[u]){
        if(color[v] == 0){
            if(dfs(v)) return true;
        }
        else if(color[v] == 1) return true;
    }
    color[u] = 2;
    return false;
}

void solve(){
    memset(ke, 0, sizeof(ke));
    memset(color, 0, sizeof(color));
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        int x, y; cin>>x>>y;
        ke[x].push_back(y);
    }
    for(int i=1; i<=n; i++){
        if(color[i] == 0){
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
