#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

void solve(){
    int n; cin>>n;
    cin.ignore();
    vector<pair<int,int>> adj;
    for(int i=1; i<=n; i++){
        string s; getline(cin, s);
        stringstream ss(s); string tmp;
        while(ss >> tmp){
            if(i < stoi(tmp)){
                adj.push_back({i, stoi(tmp)});
            }
        }
    }
    sort(adj.begin(), adj.end());
    for(auto it : adj){
        cout<<it.first<<" "<<it.second<<endl;
    }
}

int main(){
    int t=1;
    // cin.ignore();
    while(t--){
        solve();
        // cout<<endl;
    }
}
