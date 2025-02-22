#include <bits/stdc++.h>
using namespace std;

int a[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

void solve(){
    int n; cin>>n;
    int cnt = 0;
    while(n){
        for(int i=0; i<10; i++){
            cnt += (n/a[i]);
            n %= a[i];
        }
    }
    cout<<cnt;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
