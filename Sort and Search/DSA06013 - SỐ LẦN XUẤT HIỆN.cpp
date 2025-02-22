#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,x; cin>>n>>x;
    map<int,int> mp;
    int a[1001]; 
    for(int i=0; i<n; i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    cout<<(mp[x]?mp[x]:-1)<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}
