#include<bits/stdc++.h>
using namespace std;

int n, a[1001];

void solve(){
    cin>>n;
    int sum = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum += a[i];
    }
    cout<<((sum%2==0)?"YES":"NO");
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}