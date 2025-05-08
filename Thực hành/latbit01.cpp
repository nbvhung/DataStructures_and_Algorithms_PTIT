#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, q; cin>>n>>q;
    int dem[n+2]={0};
    while(q--){
        int x, y; cin>>x>>y;
        dem[x]++; dem[y+1]--;
    }
    int res[n+1]={0};
    for(int i=1; i<=n; i++){
        dem[i] += dem[i-1];
        res[i] = dem[i] % 2;
        cout<<res[i]<<" "; 
    }
}

int main() {
    int t=1;
    while(t--){
        solve();
        cout<<endl;
    }

    return 0;
}