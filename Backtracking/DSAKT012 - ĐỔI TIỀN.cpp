#include <bits/stdc++.h>
using namespace std;

int n, s, a[35];
bool ok;

void ql(int bd, int sum, int cnt){
    if(sum > s) return;
    if(ok) return;
    if(sum == s){
        cout<<cnt;
        ok = 1; return;
    }
    for(int j=bd; j<=n; j++){
        ql(j+1, sum+a[j], cnt+1);
    }
}

void solve(){
    cin>>n>>s;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    sort(a+1, a+n+1, greater<int>());
    ok = false;
    ql(1, 0, 0);
    if(!ok){
        cout<<-1; return;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t=1;
    while(t--){
        solve();
        cout<<'\n';
    }
    return 0;
}
