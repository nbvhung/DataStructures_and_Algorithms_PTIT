#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int p[1000001], pre[1000001];

void sang(){
    for(int i=2; i<=1000000; i++){
        if(p[i]==0){
            for(int j=i; j<=1000000; j+=i){
                p[j] = i;
            }
        }
    }
    for(int i=1; i<=1000000; i++){
        pre[i] = pre[i-1] + p[i];
    }
}

void solve(){
    int l, r; cin>>l>>r;
    cout<<pre[r] - pre[l-1];
}

int main(){
    sang();
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}