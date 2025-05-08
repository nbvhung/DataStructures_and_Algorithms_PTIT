#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int mod = 1e9+7;

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(int &x : v) cin>>x;
    cout<<lower_bound(v.begin(), v.end(), 1) - v.begin();
}

int main() {
    int t; cin>>t;
    while (t--) {
        solve();
        cout<<endl;
    }
    return 0;
}