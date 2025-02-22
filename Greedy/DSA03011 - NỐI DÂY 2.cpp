#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll mod = 1e9+7;

void solve(){
    priority_queue<ll, vector<ll>, greater<ll>> q;
    ll n; cin>>n;
    for(ll i=0; i<n; i++){
        ll x; cin>>x;
        q.push(x);
    }
    ll ans = 0;
    while(q.size()>1){
        ll x = q.top(); q.pop();
        ll y = q.top(); q.pop();
        ans = (ans%mod + (x%mod + y%mod)%mod) % mod;
        q.push((x%mod + y%mod)%mod);
    }
    cout<<ans;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
