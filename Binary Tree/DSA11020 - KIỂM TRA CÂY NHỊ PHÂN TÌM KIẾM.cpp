#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin>>n;
    int a[n];
    for(int &x : a) cin>>x;
    for(int i=1; i<n; i++){
        if(a[i] < a[i-1]){
            cout<<0;
            return;
        }
    }
    cout<<1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
        cout<<endl;
    }
    return 0;
}