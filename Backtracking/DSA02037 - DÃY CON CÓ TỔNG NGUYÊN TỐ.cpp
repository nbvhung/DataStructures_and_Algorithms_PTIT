#include <bits/stdc++.h>
using namespace std;

int n, a[100], x[100];
vector<vector<int>> v;

bool nt(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return n>1;
}

void ql(int i, int bd, int sum){
    for(int j=bd; j<=n; j++){
        x[i] = a[j];
        if(nt(sum + a[j])){
            vector<int> tmp(x+1, x+i+1);
            v.push_back(tmp);
        }
        ql(i+1, j+1, sum + a[j]);
    }
}

void solve(){
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    sort(a+1, a+1+n, greater<int>());
    ql(1,1,0);
    sort(v.begin(), v.end());
    for(auto it : v){
        for(int x : it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    v.clear();
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
