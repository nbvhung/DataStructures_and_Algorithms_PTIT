#include <bits/stdc++.h>
using namespace std;

bool used[1001];
vector<int> ke[1001];
int n, m;

void DFS(int u){
    used[u] = true;
    for(int v : ke[u]){
        if(!used[v]){
            DFS(v);
        }
    }
}

int tplt(){
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(!used[i]){
            cnt++;
            DFS(i);
        }
    }
    return cnt;
}

void solve(){
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        int x, y; cin>>x>>y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    cout<<tplt();
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
