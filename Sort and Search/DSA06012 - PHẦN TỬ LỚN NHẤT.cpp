#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,x; cin>>n>>x;
    int a[1001]; 
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    for(int i=0; i<x; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}
