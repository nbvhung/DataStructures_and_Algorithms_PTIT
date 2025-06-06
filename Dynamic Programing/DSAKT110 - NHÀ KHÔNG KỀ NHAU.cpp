#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int F[1000001], a[1000001];

void solve(){
    int n; cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    memset(F, 0, sizeof(F));
    F[1] = a[1]; F[2] = max(a[1], a[2]);
    for(int i=3; i<=n; i++){
        F[i] = max(F[i-1], F[i-2] + a[i]);
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
