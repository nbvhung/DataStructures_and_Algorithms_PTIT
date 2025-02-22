#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin>>n;
    int a[n+1], b[n+1];
    for(int i=1; i<=n; i++){
        cin>>a[i];
        b[i] = a[i];
    }
    sort(b+1, b+n+1);
    for(int i=1; i<=n; i++){
        if(a[i] != b[i] && a[i] != b[n-i+1]){
            cout<<"No"; return;
        }
    }
    cout<<"Yes";
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
