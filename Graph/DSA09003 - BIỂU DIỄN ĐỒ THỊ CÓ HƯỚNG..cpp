#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m; cin>>n>>m;
    vector<int> ke[1001];
    for(int i=1; i<=m; i++){
        int x, y; cin>>x>>y;
        ke[x].push_back(y);
    }
    for(int i=1; i<=n; i++){
        cout<<i<<": ";
        for(int x : ke[i]) cout<<x<<" ";
        cout<<endl;
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
