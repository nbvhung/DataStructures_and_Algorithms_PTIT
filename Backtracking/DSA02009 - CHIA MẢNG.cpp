#include <bits/stdc++.h>
using namespace std;

int n, k, s, a[25];
bool ok;

void ql(int bd, int sum, int cnt){
    if(cnt == k){
        ok = true;
        return;
    }
    if(ok) return;
    for(int j=bd; j<=n; j++){
        if(sum + a[j] <= s){
            if(sum + a[j] == s){
                ql(bd, sum, cnt+1);
            }
            else{
                ql(bd+1, sum + a[j], cnt);
            }
        }
    }
}

void solve(){
    ok = false;
    s = 0;
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        s += a[i];
    }
    if(s % k != 0){
        cout<<0; return;
    }
    s /= k;
    ql(1, 0, 0);
    cout<<(ok ? 1 : 0);
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