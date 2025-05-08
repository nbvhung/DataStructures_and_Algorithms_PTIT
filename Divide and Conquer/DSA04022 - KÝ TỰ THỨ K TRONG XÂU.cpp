#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int divide(int n, ll k){
    ll x = pow(2, n-1);
    if(x == k) return n;
    if(k > x) return divide(n-1, k-x);
    return divide(n-1, k);
}

void solve(){
    int n; ll k; cin>>n>>k;
    cout<<(char)(divide(n, k) + 64);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
        cout << '\n';
    }
    return 0;
}
