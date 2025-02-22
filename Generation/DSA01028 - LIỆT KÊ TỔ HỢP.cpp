#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 1e9+7;
int n, k, x[1001], a[1001];
set<int> se;
vector<int> v;

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
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        se.insert(a[i]);
    }
    for(int x : se){
        v.push_back(x);
    }
    n = v.size();
    ql(1);
}

int main(){
    int t=1;
    while(t--){
        solve();
        cout<<endl;
    }
}
