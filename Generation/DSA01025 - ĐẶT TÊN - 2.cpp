#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 1e9+7;
int n, k, x[1001];
int cnt=0;

void ql(int i){
    for(int j=x[i-1]+1; j<=n-k+i; j++){
        x[i] = j;
        if(i == k){
            for(int i=1; i<=k; i++){
                cout<<char(x[i]+'A'-1);
            }
            cout<<endl;
        }
        else ql(i+1);
    }
}

void solve(){
    cin>>n>>k;
    ql(1);
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
