#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,x; cin>>n>>x;
    int a[1001]; 
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int ans=0;
    for(int i=0; i<n; i++){
        auto it1 = lower_bound(a+i+1,a+n,x-a[i]);
        auto it2 = upper_bound(a+i+1,a+n,x-a[i]);
        ans += it2 - it1;
    }
    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}
