#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m; 
vector<int> ke[1005];
bool used[1005];

void bfs(int u){
    queue<int> q;
    q.push(u); used[u] = true;
    while(!q.empty()){
        int x = q.front(); q.pop();
        for(int v : ke[x]){
            if(!used[v]){
                used[v] = true;
                q.push(v);
            }
        }
    }
}

int tplt(){
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(!used[i]){
            cnt++;
            bfs(i);
        }
    }
    return cnt;
}

void solve(){
    memset(ke, 0, sizeof(ke));
    memset(used, false, sizeof(used));
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        int x, y; cin>>x>>y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    cout<<tplt();
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
