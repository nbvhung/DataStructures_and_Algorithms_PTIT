#include <bits/stdc++.h>
using namespace std;

int n, x[100], used[100];

void ql(int i){
    for(int j=0; j<=1; j++){
        x[i] = j;
        if(i == n){
            for(int i=1; i<=n; i++){
                if(x[i] == 0) cout<<"A";
                else cout<<"B";
            }
            cout<<" ";
        }
        else ql(i+1);
    }
}

void solve(){
    for(int i=1; i<=n; i++) x[i] = 0;
    cin>>n;
    ql(1);
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
