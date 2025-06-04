#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> v;

void init(){
    queue<string> q;
    q.push("1");
    while(!q.empty()){
        string tmp = q.front(); q.pop();
        if(tmp.size() > 18) break;
        v.push_back(stoll(tmp));
        q.push(tmp + "0");
        q.push(tmp + "1");
    }
}

void solve(){
    ll n; cin>>n;
    cout<<upper_bound(v.begin(), v.end(), n) - v.begin();
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    init();
    int t; cin>>t;
    while(t--){
        solve();
        cout<<'\n';
    }
    return 0;
}
