#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, m; cin>>n>>m;
    int a[n+1][m+1];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i == j) a[i][j] = 0;
            else a[i][j] = 1e9;
        }
    }
    for(int i=1; i<=m; i++){
        int x, y, w;
        cin>>x>>y>>w;
        a[x][y] = w;
        a[y][x] = w;
    }
    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
            }
        }
    }
    int q; cin>>q;
    while(q--){
        int x, y; cin>>x>>y;
        cout<<a[x][y]<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t=1;
    while(t--){
        solve();
        cout<<'\n';
    }
    return 0;
}