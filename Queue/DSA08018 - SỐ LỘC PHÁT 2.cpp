#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<string> v;

void init(int n){
    queue<string> q;
    q.push("6");
    q.push("8");
    while(!q.empty()){
        string tmp = q.front(); q.pop();
        if(tmp.size() > n) break;
        v.push_back(tmp);
        q.push(tmp + "6");
        q.push(tmp + "8");
    }
}

void solve(){
    v.clear();
    int n; cin>>n;
    init(n);
    cout<<v.size()<<endl;
    for(string x : v) cout<<x<<" ";
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
