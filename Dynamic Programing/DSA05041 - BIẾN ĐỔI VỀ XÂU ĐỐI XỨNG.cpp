#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int F[1001][1001];

void solve(){
    memset(F, 0, sizeof(F));
    string s; cin>>s;
    s = "@" + s;
    int n = s.size();

    for(int i=1; i<=n; i++) F[i][i] = 1;

    for(int len = 2; len <= n; len++){
        for(int i=1; i<=n-len+1; i++){
            int j = len+i-1;
            if(s[i] == s[j]){
                F[i][j] = (len == 2) ? 2 : F[i+1][j-1] + 2;
            }
            else{
                F[i][j] = max(F[i+1][j], F[i][j-1]);
            }
        }
    }

    cout<<n - F[1][n] - 1;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout<<endl;
    }
}
