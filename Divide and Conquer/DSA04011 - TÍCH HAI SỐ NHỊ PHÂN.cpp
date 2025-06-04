#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll powBin(ll k){
    if(k == 0) return 1;
    if(k == 1) return 2;
    ll x = powBin(k/2);
    if(x % 2 == 0) return x*x;
    return 2*x*x;
}

ll _2to10(string s) {
    return stoll(s, 0, 2);
}

void solve(){
    string s1, s2; cin>>s1>>s2;
    cout<<_2to10(s1) * _2to10(s2);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
        cout<<'\n';
    }
    return 0;
}
