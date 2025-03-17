#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 1e9+7;
int F[1000005];

void solve(){
    int n, s; cin>>n>>s;
    int a[1001];
    for(int i=1; i<=n; i++) cin>>a[i];
    memset(F, 0, sizeof(F));
    F[0] = 1;
    for(int i=1; i<=s; i++){
        for(int j=1; j<=n; j++){
            if(i >= a[j]){
                F[i] += F[i-a[j]];
                F[i] %= mod;
            }
        }
    }
    cout<<F[s];
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}