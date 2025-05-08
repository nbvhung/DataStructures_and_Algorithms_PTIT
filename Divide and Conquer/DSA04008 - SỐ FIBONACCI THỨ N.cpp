#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int mod = 1e9+7;

struct matrix{
    ll f[2][2];
};

matrix operator * (matrix a, matrix b){
    matrix c;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            c.f[i][j] = 0;
            for(int k=0; k<2; k++){
                c.f[i][j] += a.f[i][k]%mod * b.f[k][j]%mod;
                c.f[i][j] %= mod;
            }
        }
    }
    return c;
}

matrix powmod(matrix a, ll n){
    if(n == 1) return a;
    matrix x = powmod(a, n/2);
    if(n % 2 == 0) return x*x;
    return x*x*a;
}

void solve(){
    ll n; cin>>n;
    matrix a;
    a.f[0][0] = a.f[0][1] = a.f[1][0] = 1;
    a.f[1][1] = 0;
    matrix res = powmod(a, n);
    cout<<res.f[1][0];
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
