#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 1e9+7;
void solve(){
    int n,k; cin>>n>>k;
    ll F[100001] = {0};
    F[0] = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=k; j++){
            if(i>=j){
                F[i] = (F[i] + F[i - j]) % mod;
            }
        }
    }
    cout<<F[n];
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
