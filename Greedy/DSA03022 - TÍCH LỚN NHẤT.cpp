#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<max({a[0]*a[1], a[0]*a[1]*a[n-1], a[n-1]*a[n-2], a[n-1]*a[n-2]*a[n-3]});
}

int main() {
    int t=1;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}