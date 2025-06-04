#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin>>n;
    int min_val = 1e9, max_val = -1e9;
    int d[100001] = {};
    for(int i=0; i<n; i++){
        int x; cin>>x;
        ++d[x];
        min_val = min(min_val, x);
        max_val = max(max_val, x);
    }
    int res = 0;
    for(int i=min_val; i<=max_val; i++){
        res += !d[i];
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
