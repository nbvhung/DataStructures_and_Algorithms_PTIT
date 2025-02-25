#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, m, k; cin>>n>>m>>k;
    int a[n], b[m];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];
    int i=0, j=0, idx=0;
    int res[n+m+1] = {};
    while(i<n && j<m){
        if(a[i] <= b[j]){
            res[idx++] = a[i++];
        }
        else{
            res[idx++] = b[j++];
        }
    }
    while(i<n){
        res[idx++] = a[i++];
    }
    while(j<m){
        res[idx++] = b[j++];
    }
    cout<<res[k-1];
}

int main() {
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
