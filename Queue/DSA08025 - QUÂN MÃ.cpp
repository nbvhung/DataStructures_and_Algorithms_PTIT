#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n=8, a[10][10], s, t, u, v;
bool used[10][10];

int dx[] = {-1, -2, -2, -1, 1, 2, 2, 1};
int dy[] = {-2, -1, 1, 2, 2, 1, -1, -2};

void bfs(){
    queue<pair<pair<int, int>, int>> q;
    q.push({{s, t}, 0});
    used[s][t] = true;
    while(!q.empty()){
        auto it = q.front(); q.pop();
        int i = it.first.first, j = it.first.second;
        int len = it.second;
        if(i == u && j == v){
            cout<<len; return;
        }
        for(int k=0; k<8; k++){
            int i1 = i + dx[k], j1 = j + dy[k];
            if(i1>=1 && i1<=n && j1>=1 && j1<=n && !used[i1][j1]){
                used[i1][j1] = true;
                q.push({{i1, j1}, len+1});
            }
        }
    }
}

void solve(){
    for(int i=0; i<=8; i++){
        memset(used[i], false, sizeof(used[i]));
    }
    string s1, s2; cin>>s1>>s2;
    s = int(s1[0] - 'a' + 1);
    t = s1[1] - '0';
    u = int(s2[0] - 'a' + 1);
    v = s2[1] - '0';
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
