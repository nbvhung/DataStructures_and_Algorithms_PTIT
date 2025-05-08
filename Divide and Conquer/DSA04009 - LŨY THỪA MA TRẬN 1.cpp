#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int mod = 1e9+7;
int n; ll k;

struct matrix{
    ll f[11][11];
};

matrix operator * (matrix a, matrix b){
    matrix c;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            c.f[i][j] = 0;
            for(int k=0; k<n; k++){
                c.f[i][j] += a.f[i][k]%mod * b.f[k][j]%mod;
                c.f[i][j] %= mod;
            }
        }
    }
    return c;
}

matrix powmod(matrix a, ll k){
    if(k == 1) return a;
    matrix x = powmod(a, k/2);
    if(k % 2 == 0) return x*x;
    return x*x*a;
}

void solve(){
    cin>>n>>k;
    matrix a;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a.f[i][j];
        }
    }
    matrix res = powmod(a, k);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<res.f[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
        cout << '\n';
    }
    return 0;
}
