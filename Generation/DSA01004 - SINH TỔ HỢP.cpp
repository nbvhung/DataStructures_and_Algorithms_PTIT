#include <bits/stdc++.h>
using namespace std;

int n, k, x[100];

void in(){
    for(int i=1; i<=k; i++) cout<<x[i];
    cout<<" ";
}

void ql(int i){
    for(int j=x[i-1]+1; j<=n-k+i; j++){
        x[i] = j;
        if(i == k){
            in();
        }
        else ql(i+1);    }
}

void solve(){
    for(int i=1; i<=n; i++) x[i] = i;
    cin>>n>>k;
    ql(1);
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
