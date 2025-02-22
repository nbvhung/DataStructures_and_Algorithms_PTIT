#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    priority_queue<int, vector<int>, greater<int>> q;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        q.push(x);
    }
    ll ans = 0;
    while(q.size()>1){
        ll x = q.top(); q.pop();
        ll y = q.top(); q.pop();
        ans += x + y;
        q.push(x+y);
    }
    cout<<ans;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
