#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin>>n;
    int a[n+1];
    ll ans = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] > 0){
            ans += a[i]*2;
        }
    }
    cout<<ans;
}

int main() {
    int t=1;
    while(t--){
        solve();
        cout<<endl;
        return 0;
    }
}
