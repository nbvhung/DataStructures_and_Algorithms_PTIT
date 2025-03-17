#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string s; cin>>s;
    int F[1001] = {0};
    if(s[0] == '0'){
        cout<<0; return;
    }
    F[0] = F[1] = 1;
    for(int i=2; i<=s.size(); i++){
        if(s[i-1] > '0') F[i] = F[i-1];
        if(s[i-2] == '1' || (s[i-2] == '2' && s[i-1] < '7')) F[i] += F[i-2];
    }
    cout<<F[s.size()];
}

int main() {
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}