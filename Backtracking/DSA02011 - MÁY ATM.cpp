#include <bits/stdc++.h>
using namespace std;

int n, s, a[35];
bool ok = false;

void ql(int bd, int sum, int cnt){
    if(sum > s) return;
    if(sum == s){
        ok = 1;
        cout<<cnt;
        return;
    }
    if(ok) return;
    for(int j=bd; j<=n; j++){
        ql(j+1, sum + a[j], cnt+1);
    }
}

void solve(){
    ok = false;
    cin>>n>>s;
    for(int i=1; i<=n; i++) cin>>a[i];
    sort(a+1, a+n+1, greater<int>());
    ql(1, 0, 0);
    if(!ok) cout<<-1;
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