#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int mod = 1e9+7;

int Kto10(string s, int k){
    int res = 0;
    for(char c : s){
        res = res * k + (c - '0');
    }
    return res;
}

string _10toK(int n, int k){
    if(n == 0) return "0";
    string res = "";
    while(n){
        res = char((n % k) + '0') + res;
        n/=k;
    }
    return res;
}

void solve(){
    int k; string a, b;
    cin>>k>>a>>b;
    int a1 = Kto10(a, k);
    int b1 = Kto10(b, k);
    int res = a1 + b1;
    cout<<_10toK(res, k);
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