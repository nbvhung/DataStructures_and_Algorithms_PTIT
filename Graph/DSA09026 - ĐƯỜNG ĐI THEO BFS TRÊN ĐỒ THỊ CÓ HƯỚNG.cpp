#include <bits/stdc++.h>
using namespace std;

bool used[1001];
vector<int> ke[1001];
int parent[1001];

void BFS(int u){
    queue<int> q;
    q.push(u); 
    used[u] = true;
    while(!q.empty()){
        int x = q.front(); q.pop();
        for(int v : ke[x]){
            if(!used[v]){
                parent[v] = x;
                q.push(v);
                used[v] = true;
            }
        }
    }
}

void solve(){
    int n, m, s, t; cin>>n>>m>>s>>t;
    for(int i=1; i<=m; i++){
        int x, y; cin>>x>>y;
        ke[x].push_back(y);
    }
    BFS(s);
    if(used[t]){
        vector<int> res;
        while(t!=s){
            res.push_back(t);
            t = parent[t];
        }
        res.push_back(t);
        reverse(res.begin(), res.end());
        for(int x : res) cout<<x<<" ";
    }
    else cout<<-1;
    memset(used, false, sizeof(used));
    memset(ke, 0, sizeof(ke));
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
