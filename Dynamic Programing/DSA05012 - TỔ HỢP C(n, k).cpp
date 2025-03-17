#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 1e9+7;
ll F[1001][1001];

void solve(){
    int n, k; cin>>n>>k;
    memset(F, 0, sizeof(F));
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            if(j == 0 || i == j){
                F[i][j] = 1;
            }
            else{
                F[i][j] = (F[i-1][j-1] + F[i-1][j]) % mod;
            }
        }
    }
    cout<<F[n][k];
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
