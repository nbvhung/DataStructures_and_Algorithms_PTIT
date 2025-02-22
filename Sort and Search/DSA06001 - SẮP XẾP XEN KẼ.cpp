#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    int a[n+1], b[n+1];
    for(int i=0; i<n; i++){
        cin>>a[i];
        b[i] = a[i];
    }
    sort(a,a+n,greater<int>());
    sort(b,b+n);
    if(n%2==0){
        for(int i=0; i<(n+1)/2; i++){
            cout<<a[i]<<" "<<b[i]<<" ";
        }
    }
    else{
        for(int i=0; i<n/2; i++){
            cout<<a[i]<<" "<<b[i]<<" ";
        }
        cout<<a[n/2];
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
