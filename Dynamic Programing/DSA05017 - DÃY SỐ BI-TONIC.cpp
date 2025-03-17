#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++) cin>>a[i];
    int F[101] = {0}, G[101] = {0};
    for(int i=1; i<=n; i++){
        F[i] = a[i];
        for(int j=1; j<=i; j++){
            if(a[j] < a[i]){
                F[i] = max(F[i], F[j] + a[i]);
            }
        }
    }
    // for(int x : F) cout<<x<<" "; 
    for(int i=n; i>=0; i--){
        G[i] = a[i];
        for(int j=n; j>=i; j--){
            if(a[j] < a[i]){
                G[i] = max(G[i], G[j] + a[i]);
            }
        }
    }
    int res = -1e9;
    for(int i=1; i<=n; i++){
        res = max(res, F[i] + G[i] - a[i]);
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
