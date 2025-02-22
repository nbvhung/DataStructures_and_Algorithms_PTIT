#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin>>n;
    vector<pair<int,int>> adj;
    cin.ignore();
    int a[n+1][n+1] = {0};
    for(int i=1; i<=n; i++){
        string s; getline(cin, s);
        stringstream ss(s); string tmp;
        while(ss >> tmp){
            adj.push_back({i, stoi(tmp)});
        }
    }
    sort(adj.begin(), adj.end());
    for(auto it : adj){
        a[it.first][it.second] = 1;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t=1;
    while(t--){
        solve();
        // cout<<endl;
    }
}
