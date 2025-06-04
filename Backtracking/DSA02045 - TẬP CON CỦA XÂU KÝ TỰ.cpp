#include <bits/stdc++.h>
using namespace std;

int n; string s;
bool used[20];
char a[20];

void ql(int bd, int idx){
    for(int j=bd; j<=n; j++){  
        if(!used[j]){
            a[idx] = s[j];
            used[j] = true;
            for(int i=1; i<=idx; i++) cout<<a[i];
            cout<<" "; 
            ql(j+1, idx+1);
            used[j] = false;
        }
    }
}

void solve(){
    memset(used, false, sizeof(used));
    cin>>n>>s;
    s = "0" + s;
    ql(1, 1);
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
