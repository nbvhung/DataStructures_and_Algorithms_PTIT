#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int a[25], x[25];
int n, s;
vector<vector<int>> v;

void ql(int i, int sum, int bd){
    for(int j=bd; j<=n; j++){
        if(sum + a[j] <= s){
            x[i] = a[j];
            if(sum + a[j] == s){
                vector<int> tmp(x+1, x+i+1);
                v.push_back(tmp);
            }
            else{
                ql(i+1, sum + a[j], j);
            }
        }
    }
}

void solve(){
    v.clear();
    cin>>n>>s;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    ql(1, 0, 1);
    if(!v.size()){
        cout<<-1; return;
    }
    cout<<v.size()<<" ";
    for(auto it : v){
        cout<<"{";
        for(int i=0; i<it.size(); i++){
            if(i != it.size()-1){
                cout<<it[i]<<" ";
            }
            else{
                cout<<it[i]<<"} ";
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
        cout<<'\n';
    }
    return 0;
}