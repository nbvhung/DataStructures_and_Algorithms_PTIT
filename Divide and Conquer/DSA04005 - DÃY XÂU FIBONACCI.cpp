#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int mod = 1e9+7;
ll F[101];

void init(){
    F[1] = 1; F[2] = 1;
    for(int i=3; i<=92; i++){
        F[i] = F[i-1] + F[i-2];
    }
}

char fibo(int n, ll k){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= F[n-2]) return fibo(n-2, k);
    return fibo(n-1, k - F[n-2]);
}

void solve() {
    int n; ll k; cin>>n>>k;
    cout<<fibo(n,k);
}

int main() {
    init();
    int t; cin>>t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}
