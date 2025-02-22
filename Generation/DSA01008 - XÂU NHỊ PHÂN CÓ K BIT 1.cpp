#include <bits/stdc++.h>
using namespace std;

int n, k, x[100];

void ql(int i){
    for(int j=0; j<=1; j++){
        x[i] = j;
        if(i == n){
            int cnt=0;
            for(int u=1; u<=n; u++){
                if(x[u] == 1) cnt++;
            }
            if(cnt == k){
                for(int u=1; u<=n; u++){
                    cout<<x[u];
                }
                cout<<endl;
            }      
        }
        else{
            ql(i+1);
        }
    }
}

void solve(){
    for(int i=1; i<=n; i++) x[i] = 0;
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
