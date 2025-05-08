#include<bits/stdc++.h>
using namespace std;

int n, x[1001];
vector<vector<int>> v;

void ql(int i, int bd, int sum){
    for(int j=bd; j>=1; j--){
        if(sum + j <= n){
            x[i] = j;
            if(sum + j == n){
                vector<int> tmp(x+1, x+i+1);
                v.push_back(tmp);
            }
            else ql(i+1, j, sum + j);
        }
    }
}

void solve(){
    v.clear();
    cin>>n;
    ql(1, n, 0);
    cout<<v.size()<<endl;
    for(auto it : v){
        cout<<"(";
        for(int i=0; i<it.size(); i++){
            cout<<it[i];
            if(i != it.size()-1){
                cout<<" ";
            }
        }
        cout<<") ";
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}