#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, k;
int x[101], a[101];
int res = 0;

void ql(int i, int bd){
    for(int j=bd; j<=n; j++){
        x[i] = j;
        if(i>1 && a[x[i]] <= a[x[i-1]]) continue;
        if(i == k){
            res++;
        }
        else{
            ql(i+1, j+1);
        }
    }
}

void solve(){
    cin>>n>>k;
    for(int i=1; i<=n; i++) cin>>a[i];
    ql(1,1);
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
