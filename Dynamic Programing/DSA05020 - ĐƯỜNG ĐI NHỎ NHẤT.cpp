#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m; cin>>n>>m;
    int a[505][505], F[505][505] = {0};
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>a[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        F[i][0] = 1e9;
    }
    for(int i=1; i<=m; i++){
        F[0][i] = 1e9;
    }
    F[0][0] = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            F[i][j] = min({F[i-1][j], F[i][j-1], F[i-1][j-1]}) + a[i][j];
        }
    }
    cout<<F[n][m];
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
