#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 123456789;

ll powmod(ll n, ll k){
    if(k==1) return n;
    ll x = powmod(n, k/2);
    if(k%2==0) return ((x%mod)*(x%mod))%mod;
    return ((n%mod)*(x%mod)*(x%mod))%mod;
}

void solve(){
    ll n; cin>>n;
    cout<<powmod(2, n-1);
}

int main() {
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
