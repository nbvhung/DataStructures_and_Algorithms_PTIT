#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin>>n;
    vector<int> bd, kt;
    for(int i=1; i<=n; i++){
        int x, y; cin>>x>>y;
        bd.push_back(x);
        kt.push_back(y);
    }
    sort(bd.begin(), bd.end());
    sort(kt.begin(), kt.end());
    int q; cin>>q;
    while(q--){
        int c; cin>>c;
        int st = upper_bound(bd.begin(), bd.end(), c) - bd.begin();
        int ed = lower_bound(kt.begin(), kt.end(), c) - kt.begin();
        cout<<st - ed<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    while (t--) {
        solve();
        cout << '\n';
    }
    return 0;
}
