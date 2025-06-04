#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int mod = 1e9+7;

void solve(){
    int n; cin>>n;
    int a[101], F[101] = {0};
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++){
        F[i] = max(F[i], F[i-1] + a[i]);
    }
    cout<<*max_element(F+1, F+n+1);
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
