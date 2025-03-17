#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int F[1001][1001];

void solve(){
    string s, t; cin>>s>>t;
    int n = s.size(), m = t.size();
    s = "0" + s;
    t = "0" + t;
    memset(F, 0, sizeof(F));
    F[0][0] = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(s[i] == t[j]){
                F[i][j] = F[i-1][j-1] + 1;
            }
            else{
                F[i][j] = max(F[i-1][j], F[i][j-1]);
            }
        }
    }
    cout<<F[n][m];
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
