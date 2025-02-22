#include <bits/stdc++.h>
using namespace std;

int n, k, a[11], x[11];
vector<vector<int>> v;

void ql(int i, int bd, int sum){
    for(int j=bd; j<=n; j++){
        if(sum + a[j] <= k){
            x[i] = a[j];
            if(sum + a[j] == k){
                vector<int> tmp(x+1, x+i+1);
                v.push_back(tmp);
            }
            else{
                ql(i+1, j+1, sum + a[j]);
            }
        }
    }
}

void solve(){
    cin>>n>>k;
    for(int i=1; i<=n; i++) cin>>a[i];
    sort(a+1,a+n+1);
    ql(1,1,0);
    sort(v.begin(), v.end());
    if(v.size() == 0){
        cout<<-1; return;
    }
    for(auto it : v){
        cout<<"[";
        for(int i=0; i<it.size(); i++){
            cout<<it[i];
            if(i != it.size()-1) cout<<" "; 
        }
        cout<<"] ";
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