#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<string> v;

void init(){
    queue<string> q;
    q.push("1");
    while(!q.empty()){
        string tmp = q.front(); q.pop();
        if(tmp.size() > 15) break;
        v.push_back(tmp);
        q.push(tmp + "0");
        q.push(tmp + "1");
    }
}

void solve(){
    init();
    int n; cin>>n;
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
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
