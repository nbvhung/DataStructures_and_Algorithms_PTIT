#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int x[1001], n, k;
set<string> se;
vector<string> v;

void ql(int i){
    for(int j=x[i-1]+1; j<=n-k+i; j++){
        x[i] = j;
        if(i == k){
            for(int u=1; u<=k; u++){
                cout<<v[x[u]-1]<<" ";
            }
            cout<<endl;
        }
        else ql(i+1);
    }
}

void solve(){
    for(int i=1; i<=n; i++) x[i] = i;
    cin>>n>>k;
    string s;
    while(cin>>s){
        se.insert(s);
    }
    for(string x : se){
        v.push_back(x);
    }
    n = v.size();
    ql(1);
}

int main() {
    int t=1;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
