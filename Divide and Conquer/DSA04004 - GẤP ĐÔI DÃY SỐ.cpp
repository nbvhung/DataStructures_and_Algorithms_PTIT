#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int mod = 1e9+7;

int solve(int n, ll k) {
    ll x = pow(2, n-1);
    if(x == k) return n;
    if(k > x) return solve(n-1, k-x);
    return solve(n-1, k);
}

int main() {
    int t; cin>>t;
    while (t--) {
        int n; ll k; cin>>n>>k;
        cout << solve(n,k) << endl;
    }
    return 0;
}
