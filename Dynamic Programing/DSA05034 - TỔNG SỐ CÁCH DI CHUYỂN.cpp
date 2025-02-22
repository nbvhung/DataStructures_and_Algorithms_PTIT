#include <bits/stdc++.h>
using namespace std;

int F[100001], mod=1e9+7;

void solve(){
    memset(F, 0, sizeof(F));
    int n, k; cin>>n>>k;
    F[0] = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=k; j++){
            if(i>=j){
                F[i] += F[i-j];
                F[i] %= mod;
            }
        }
    }
    cout<<F[n];
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
