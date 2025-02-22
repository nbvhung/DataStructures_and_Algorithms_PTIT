#include <bits/stdc++.h>
using namespace std;

int n, x[100], used[100];

void ql(int i){
    for(int j=1; j<=n; j++){
        if(!used[j]){
            x[i] = j;
            used[j] = 1;
            if(i == n){
                for(int i=1; i<=n; i++){
                    cout<<x[i];
                }
                cout<<" ";
            }
            else{
                ql(i+1);  
            }
            used[j] = 0;
        }
    }
}

void solve(){
    for(int i=1; i<=n; i++) x[i] = i;
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
