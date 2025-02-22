#include <bits/stdc++.h>
using namespace std;

int n, k, x[1001];
set<string> se;
vector<string> v;

void ql(int i){
    for(int j=x[i-1]+1; j<=n-k+i; j++){
        x[i] = j;
        if(i == k){
            for(int i=1; i<=k; i++){
                cout<<v[x[i]-1]<<" ";
            }
            cout<<endl;
        }
        else{
            ql(i+1);
        }
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
    v.clear();
    se.clear();
}

int main(){
    int t=1;
    while(t--){
        solve();
        cout<<endl;
    }
}