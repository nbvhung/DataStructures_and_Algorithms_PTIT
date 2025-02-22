#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, a[101][101];
    int F[101][101] = {0};
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++) cin>>a[i][j];
    }
    F[0][1] = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            F[i][j] = F[i-1][j] + F[i][j-1];
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
