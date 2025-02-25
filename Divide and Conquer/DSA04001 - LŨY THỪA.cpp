#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 1e9+7;

ll powmod(ll a, ll b){
    if(b == 1) return a;
    ll x = powmod(a, b/2);
    if(b%2 == 0) return ((x%mod)*x%mod)%mod;
    return (((x%mod)*x%mod)*(a%mod))%mod;
}

void solve(){
    int n, k; cin>>n>>k;
    cout<<powmod(n,k);
}

int main() {
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
