#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int a[101][101], x[101];
int n = 8, ans = 0;
bool doc[101], d1[101], d2[101];

void ql(int i){
    for(int j=1; j<=n; j++){
        if(!doc[j] && !d1[i-j+n] && !d2[i+j-1]){
            x[i] = j;
            doc[j] = d1[i-j+n] = d2[i+j-1] = true;
            if(i == n){
                int sum = 0;
                for(int k=1; k<=n; k++){
                    sum += a[k][x[k]];
                }
                ans = max(ans, sum);
            }
            else ql(i+1);
            doc[j] = d1[i-j+n] = d2[i+j-1] = false;
        }
    }
}

void solve(){
    ans = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
        }
    }
    ql(1);
    cout<<ans;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    for(int i=1; i<=t; i++){
        cout<<"Test "<<i<<": ";
        solve();
        cout<<'\n';
    }
    return 0;
}