#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void ql(ll tu, ll mau){
    if(mau % tu == 0){
        cout<<1<<"/"<<mau/tu;
        return;
    }
    ll x = mau/tu + 1;
    cout<<1<<"/"<<x<<" + ";
    ll mau1 = mau * x;
    ll tu1 = tu * x - mau;
    ql(tu1, mau1);
}

void solve() {
    ll p, q; cin>>p>>q;
    ql(p,q);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}