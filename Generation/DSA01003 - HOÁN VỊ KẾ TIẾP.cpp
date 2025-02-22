#include <bits/stdc++.h>
using namespace std;

int n, x[1003];

void solve(){
    cin>>n;
    for(int i=1; i<=n; i++) cin>>x[i];
    next_permutation(x+1,x+n+1);
    for(int i=1; i<=n; i++) cout<<x[i]<<" ";
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
