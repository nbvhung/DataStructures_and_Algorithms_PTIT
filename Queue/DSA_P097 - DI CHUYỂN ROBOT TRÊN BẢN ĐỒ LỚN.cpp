#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, s, t, u, v;
map<pair<int,int>, bool> used, valid;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void bfs(){
    queue<pair<pair<int, int>, int>> q;
    q.push({{s, t}, 0});
    used[{s, t}] = true;
    while(!q.empty()){
        auto it = q.front(); q.pop();
        int i = it.first.first, j = it.first.second;
        int len = it.second;
        if(i == u && j == v){
            cout<<len; return;
        }
        for(int k=0; k<8; k++){
            int i1 = i + dx[k], j1 = j + dy[k];
            if(valid[{i1, j1}] && !used[{i1, j1}]){
                used[{i1, j1}] = true;
                q.push({{i1, j1}, len+1});
            }
        }
    }
    cout<<-1;
}

void solve(){
    used.clear();
    valid.clear();
    cin>>s>>t>>u>>v>>n;
    for(int i=0; i<n; i++){
        int x, y1, y2; cin>>x>>y1>>y2;
        for(int j=y1; j<=y2; j++){
            valid[{x, j}] = true;
        }
    }
    bfs();
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
