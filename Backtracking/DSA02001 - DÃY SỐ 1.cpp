#include <bits/stdc++.h>
using namespace std;

int n, a[15];

void ql(int i){
    if(i==0) return;
    cout<<"[";
    for(int j=1; j<=i; j++){
        cout<<a[j];
        if(j!=i) cout<<" ";
    }
    cout<<"]\n";
    for(int j=1; j<i; j++){
        a[j] += a[j+1];
    }
    ql(i-1);
}

void solve(){
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    ql(n);
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
