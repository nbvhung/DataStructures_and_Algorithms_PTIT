#include <bits/stdc++.h>
using namespace std;

int F[101][25001];

void solve(){
    int C, n; cin>>C>>n;
    int w[101];
    for(int i=1; i<=n; i++){
        cin>>w[i];
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=C; j++){
            if(j >= w[i]){
                F[i][j] = max(w[i]+F[i-1][j-w[i]], F[i-1][j]);
            }
            else F[i][j] = F[i-1][j];
        }
    }
    cout<<F[n][C];
}

int main(){
    int t=1;
    while(t--){
        solve();
        cout<<endl;
    }
}
