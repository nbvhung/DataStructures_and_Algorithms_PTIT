#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin>>n;
    vector<int> ke[1001];
    int a[n+1][n+1];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
            if(a[i][j] == 1) ke[i].push_back(j);
        }
    }
    for(int i=1; i<=n; i++){
        for(int x : ke[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t=1;
    while(t--){
        solve();
        // cout<<endl;
    }
}
