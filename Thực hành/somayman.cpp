#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> v;

void sinh(string s){
    if(!s.empty()){
        v.push_back(stoll(s));
    }
    if(s.length() > 10) return;

    sinh(s + "4");
    sinh(s + "7");
}

void solve(){
    ll a, b; cin>>a>>b;
    sinh("");
    sort(v.begin(), v.end());

    ll res = 0;
    int i=0;
    while(a<=b){
        while(i<v.size() && v[i] < a) i++;
        ll next = v[i];
        ll r = min(b, next);
        res += (r - a + 1) * next;
        a = r + 1;
    }
    cout<<res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    while (t--) {
        solve();
        cout << '\n';
    }
    return 0;
}
