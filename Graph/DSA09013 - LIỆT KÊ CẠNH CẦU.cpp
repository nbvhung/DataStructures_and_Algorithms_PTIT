#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m; 
set<int> ke[1001];
vector<pair<int,int>> canh;
bool used[1001];

void dfs(int u){
    used[u] = true;
    for(int v : ke[u]){
        if(!used[v]){
            dfs(v);
        }
    }
}

int tplt(){
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(!used[i]){
            cnt++;
            dfs(i);
        }
    }
    return cnt;
}

void solve(){
    for(int i=1; i<=n; i++) ke[i].clear();
    canh.clear();
    memset(used, false, sizeof(used));
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        int x, y; cin>>x>>y;
        ke[x].insert(y);
        ke[y].insert(x);
        canh.push_back({x, y});
    }
    int cnt = tplt(), dem = 0;
    vector<pair<int,int>> canhcau;
    for(auto it : canh){
        int x = it.first, y = it.second;
        ke[x].erase(y);
        ke[y].erase(x);
        memset(used, false, sizeof(used));
        if(cnt < tplt()){
            canhcau.push_back({x, y});
        }
        ke[x].insert(y);
        ke[y].insert(x);
    }
    sort(canhcau.begin(), canhcau.end());
    for(auto it : canhcau){
        cout<<it.first<<" "<<it.second<<" ";
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}