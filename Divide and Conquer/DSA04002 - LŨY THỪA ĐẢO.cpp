#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 1e9+7;

ll dao(ll n){
    ll res = 0;
    while(n){
        res = res * 10 + n % 10;
        n/=10;
    }
    return res;
}

ll powmod(ll a, ll b){
    if(b == 0) return 1;
    ll x = powmod(a, b/2);
    if(b%2 == 0) return x*x%mod;
    return a*(x*x%mod)%mod;
}

void solve(){
    ll n; cin>>n;
    cout<<powmod(n,dao(n));
}

int main() {
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}