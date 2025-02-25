#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, x; cin>>n>>x;
    ll a[n+1];
    for(int i=0; i<n; i++) cin>>a[i];
    auto it = upper_bound(a, a+n, x);
    --it;
    if(it-a+1 != 0){
        cout<<it-a+1;
    }
    else cout<<-1;
}

int main() {
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
