#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    int a[n+1], F[n+1];
    for(int i=1; i<=n; i++){
        cin>>a[i];
        F[i] = a[i];
    }

    int res = -1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            if(a[j] < a[i]){
                F[i] = max(F[i], F[j] + a[i]);
            }
        }
        res = max(res, F[i]);
    }
    
    cout<<res;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
}
