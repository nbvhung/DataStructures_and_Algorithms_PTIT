#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, k; cin>>n>>k;
    int a[n];
    for(int &x : a) cin>>x;
    sort(a, a+n);
    k = min(k, n-k);
    ll s1 = 0, s2 = 0;
    for(int i=0; i<k; i++){
        s1 += a[i];
    }
    for(int i=k; i<n; i++){
        s2 += a[i];
    }
    cout<<s2-s1;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
