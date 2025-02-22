#include <bits/stdc++.h>
using namespace std;

int F[1001][1001];

void solve(){
    int n, V; cin>>n>>V;
    int w[n+1], v[n+1];
    for(int i=1; i<=n; i++){
        cin>>w[i];
    }
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }
    memset(F,0,sizeof(F));
    for(int i=1; i<=n; i++){
        for(int j=1; j<=V; j++){
            if(j >= w[i]){
                F[i][j] = max(v[i]+F[i-1][j-w[i]], F[i-1][j]);
            }
            else F[i][j] = F[i-1][j];
        }
    }
    cout<<F[n][V];
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
