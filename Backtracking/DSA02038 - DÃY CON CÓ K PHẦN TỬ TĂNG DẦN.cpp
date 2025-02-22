#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], x[100];
vector<int> tmp;
vector<vector<int>> v;

void ql(int i, int bd){
    for(int j=bd; j<=n; j++){
        tmp.push_back(a[j]);
        if(i == k){
            v.push_back(tmp);
            
        }
        else{
            ql(i+1, j+1);
        }
        tmp.pop_back();
    }
}

void solve(){
    cin>>n>>k;
    for(int i=1; i<=n; i++) cin>>a[i];
    sort(a+1, a+n+1);
    ql(1,1);
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
