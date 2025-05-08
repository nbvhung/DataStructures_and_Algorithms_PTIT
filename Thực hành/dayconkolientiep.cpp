#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 1e9+7;

void solve(){
    int n, m; cin>>n>>m;
    int a[n], b[m];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];
    int F[n+1][m+1] = {0};
    for(int i=0; i<=n; i++) F[i][0] = 1;
    for(int i=0; i<=m; i++) F[0][i] = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(a[i-1] == b[j-1]){
                F[i][j] = (F[i-1][j-1] + F[i-1][j]) % mod;
                F[i][j] = (F[i][j] + F[i][j-1] - F[i-1][j-1]) % mod;
                if(F[i][j] < 0) F[i][j] += mod;
            }
            else {
                F[i][j] = (F[i-1][j] + F[i][j-1] - F[i-1][j-1]) % mod;
                if(F[i][j] < 0) F[i][j] += mod;
            }
        }
    }
    int res = (F[n][m]) % mod;
    cout<<res;
}

int main() {
    int t=1;
    while(t--){
        solve();
    }
    return 0;
}