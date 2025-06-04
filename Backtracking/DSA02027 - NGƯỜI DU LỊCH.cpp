#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, x[101], cmin = 1e9, c[1001][1001], dis = 0, res = 1e9;
bool used[101];

void ql(int i){
    for(int j=1; j<=n; j++){
        if(!used[j]){
            x[i] = j;
            used[j] = true;
            dis += c[x[i-1]][x[i]];
            if(i == n){
                res = min(res, dis + c[x[n]][1]);
            }
            else if(dis + (n - i + 1) * cmin < res){
                ql(i+1);
            }
            used[j] = false;
            dis -= c[x[i-1]][x[i]];
        }
    }
}

void solve(){
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>c[i][j];
            cmin = min(cmin, c[i][j]);
        }
    }
    x[1] = 1;
    used[1] = true;
    ql(2);
    cout<<res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    while (t--) {
        solve();
        cout << '\n';
    }
    return 0;
}
