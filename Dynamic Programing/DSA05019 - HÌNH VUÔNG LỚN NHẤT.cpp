#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m; cin>>n>>m;
    int a[501][501];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>a[i][j];
        }
    }
    int res = 0;
    int F[501][501] = {0};
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(a[i][j] == 1){
                F[i][j] = min({F[i-1][j-1], F[i-1][j], F[i][j-1]}) + 1;
                res = max(res, F[i][j]);
            }
        }
    }
    cout<<res;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
