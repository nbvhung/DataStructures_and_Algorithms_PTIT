#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int mod = 1e9+7;

ll powmod(ll a, ll b){
    if(b==0) return 1;
    if(b==1) return a;
    ll x = powmod(a, b/2);
    if(b%2 == 1) return (((a%mod)*x%mod)*x%mod)%mod;
    return ((x%mod)*(x%mod)%mod)%mod;
}

void solve() {
    ll a, b;
    while(1){
        cin>>a>>b;
        if(a == 0 && b == 0) return;
        cout<<powmod(a, b)<<endl;
    }
}

int main() {
    solve();
    return 0;
}
