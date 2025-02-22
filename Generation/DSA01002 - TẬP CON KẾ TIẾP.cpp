#include <bits/stdc++.h>
using namespace std;

int n, k, x[1001], a[1001];

void solve(){
    cin>>n>>k;
    for(int i=1; i<=k; i++){
        cin>>a[i];
    }
    int i = k;
    while(a[i] == n-k+i){
        i--;
    }
    if(i >= 1){
        ++a[i];
        for(int j=i+1; j<=k; j++) a[j] = a[j-1] + 1;
        for(int u=1; u<=k; u++) cout<<a[u]<<" ";
    }
    else for(int u=1; u<=k; u++) cout<<u<<" ";
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
