#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, m; cin>>n>>m;
    int p[101], q[101], res[205] = {0};
    for(int i=0; i<n; i++) cin>>p[i];
    for(int i=0; i<m; i++) cin>>q[i];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            res[i+j] += p[i] * q[j];
        }
    }
    m += n-1;
    for(int i=0; i<m; i++) cout<<res[i]<<" ";
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
