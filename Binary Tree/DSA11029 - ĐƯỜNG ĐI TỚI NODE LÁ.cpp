#include<bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> ke[1001];
bool used[1001];
vector<vector<int>> v;
vector<int> tmp;

void dfs(int u){
    used[u] = true;
    bool isLeaf = true;
    tmp.push_back(u);
    for(int v : ke[u]){
        if(!used[v]){
            isLeaf = false;
            dfs(v);
        }
    }
    if(isLeaf){
        v.push_back(tmp);
    }
    tmp.pop_back();
}

void solve(){
    memset(ke, 0, sizeof(ke));
    memset(used, false, sizeof(used));
    v.clear();
    tmp.clear();
    int n; cin>>n;
    for(int i=1; i<n; i++){
        int x, y; cin>>x>>y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    dfs(1);
    sort(v.begin(), v.end(), [](vector<int> a, vector<int> b) {
        return a.back() < b.back();
    });
    for(auto it : v){
        for(int x : it){
            cout<<x<<" ";
        }
        cout<<endl;
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