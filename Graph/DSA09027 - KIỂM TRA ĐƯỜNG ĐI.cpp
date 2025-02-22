#include <bits/stdc++.h>
using namespace std;

bool used[1001];
vector<int> ke[1001];
int LienThong[1001], n ,m, cnt=0;

void DFS(int u){
    used[u] = true;
    LienThong[u] = cnt;
    for(int v : ke[u]){
        if(!used[v]){
            DFS(v);
        }
    }
}

void solve(){
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        int x, y; cin>>x>>y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for(int i=1; i<=n; i++){
        if(!used[i]){
            cnt++;
            DFS(i);
        }
    }
    int q; cin>>q;
    while(q--){
        int x, y; cin>>x>>y;
        if(LienThong[x] == LienThong[y]){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
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
