#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int mod = 1e9+7;

void solve(){
    int n, k; cin>>n>>k;
    if(k > n){
        cout<<0;
    }
    else if(k == 0){
        cout<<1;
    }
    else{
        ll res = 1;
        for(int i=n-k+1; i<=n; i++){
            res = (res * i) % mod;
        }
        cout<<res;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout<<endl;
    }
}
