#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, k; cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    ll res = 0;
    for(int i=0; i<n; i++){
        auto it1 = lower_bound(a+i+1, a+n, k-a[i]);
        auto it2 = upper_bound(a+i+1, a+n, k-a[i]);
        res += it2 - it1;
    }
    cout<<res;
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
