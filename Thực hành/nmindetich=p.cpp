#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll p; cin>>p;
    if(p==1){
        cout<<1;
        return;
    }
    vector<int> v;
    for(int i=9; i>=2; i--){
        while(p%i == 0){
            v.push_back(i);
            p/=i;
        }
    }
    if(p>1){
        cout<<-1;
        return;
    }
    sort(v.begin(), v.end());
    for(int i : v) cout<<i;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}