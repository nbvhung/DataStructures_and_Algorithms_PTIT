#include <bits/stdc++.h>
using namespace std;

vector<int> ke[10001];
int n, m, k;
vector<int> v;
bool used[10001];
int dem[1001];

void dfs(int u){
    dem[u]++;
    used[u] = true;
    for(int v : ke[u]){
        if(!used[v]){
            dfs(v);
        }
    }
}

void solve(){
    cin>>k>>n>>m;
    for(int i=0; i<k; i++){
        int x; cin>>x;
        v.push_back(x);
    }
    for(int i=1; i<=m; i++){
        int x, y; cin>>x>>y;
        ke[x].push_back(y);
    }
    for(int x : v){
        memset(used, false, sizeof(used));
        dfs(x);
    }
    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(dem[i] == k) cnt++;
    }
    cout<<cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    while(t--) {
        solve();
        cout<<endl;
    }

    return 0;
}
