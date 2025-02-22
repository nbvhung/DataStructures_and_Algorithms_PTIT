#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m; 
vector<int> ke[1005];
bool used[1005];
int parent[1001];

bool bfs(int u){
    queue<int> q;
    q.push(u); used[u] = true;
    while(!q.empty()){
        int x = q.front(); q.pop();
        for(int v : ke[x]){
            if(!used[v]){
                used[v] = true;
                parent[v] = x;
                q.push(v);
            }
            else if(v != parent[x]){
                return true;
            }
        }
    }
    return false;
}

void solve(){
    memset(ke, 0, sizeof(ke));
    memset(parent, 0, sizeof(parent));
    memset(used, false, sizeof(used));
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        int x, y; cin>>x>>y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for(int i=1; i<=n; i++){
        if(!used[i]){
            if(bfs(i)){
                cout<<"YES";
                return;
            }
        }
    }
    cout<<"NO";
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
