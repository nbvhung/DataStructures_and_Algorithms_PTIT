#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m, a[1001][1001];
bool used[1001][1001];

void bfs(){
    queue<pair<pair<int, int>, int>> q;
    q.push({{1, 1}, 0});
    used[1][1] = true;
    while(!q.empty()){
        auto tmp = q.front(); q.pop();
        int i = tmp.first.first, j = tmp.first.second;
        int len = tmp.second;
        if(i == n && j == m){
            cout<<len; return;
        }
        int i1 = i + a[i][j];
        if(i1>=1 && i1<=n && !used[i1][j]){
            used[i1][j] = true;
            q.push({{i1, j}, len + 1});
        }
        int j1 = j + a[i][j];
        if(j1>=1 && j1<=m && !used[i][j1]){
            used[i][j1] = true;
            q.push({{i, j1}, len + 1});
        }
    }
    cout<<-1; return;
}

void solve(){
    for(int i=0; i<=n; i++){
        memset(used[i], false, sizeof(used[i]));
    }
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>a[i][j];
        }
    }
    bfs();
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
        cout<<'\n';
    }
    return 0;
}