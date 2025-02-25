#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin>>n;
    int a[n], b[n-1];
    int ok=0;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n-1; i++) cin>>b[i];
    int i=0, j=0, idx=0;
    while(i<n && j<n-1){
        if(a[i++] == b[j++]){
            idx++;
        }
        else{
            cout<<idx+1;
            ok = 1;
            return;
        }
    }
    if(!ok) cout<<n;
}

int main() {
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
