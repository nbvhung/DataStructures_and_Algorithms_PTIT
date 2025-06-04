#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, s, m; cin>>n>>s>>m;
    int day = s - s/7;
    int lt = m * s;
    if(n * day < lt){
        cout<<-1; return;
    }
    for(int i=1; i<=day; i++){
        if(i * n >= lt){
            cout<<i; return;
        }
    }
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
