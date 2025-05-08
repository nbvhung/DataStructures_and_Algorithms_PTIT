#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> F(46), cnt(46);

ll solve(int n, ll k){
    if(n==0) return k>0 ? 1 : 0;
    if(n==1) return 0;
    if(k <= F[n-1]){
        return solve(n-1, k);
    }
    else return cnt[n-1] + solve(n-2, k - F[n-1]);
}

int main() {
    int t; cin>>t;
    F[0] = F[1] = 1;
    cnt[0] = 1;
    cnt[1] = 0;
    for(int i=2; i<=45; i++){
        F[i] = F[i-1] + F[i-2];
        cnt[i] = cnt[i-1] + cnt[i-2];
    }
    while(t--){
        int n; ll k; cin>>n>>k;
        cout<<solve(n, k)<<endl;
    }

    return 0;
}