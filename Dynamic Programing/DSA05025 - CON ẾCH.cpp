#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin>>n;
    ll F[101];
    F[0] = 1, F[1] = 1, F[2] = 2;
    for(int i=3; i<=n; i++){
        F[i] = F[i-1] + F[i-2] + F[i-3];
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
