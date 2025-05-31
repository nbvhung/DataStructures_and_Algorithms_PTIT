#include <bits/stdc++.h>
using namespace std;

vector<int> ke[100001];
int n, m;
bool used[100001];
int cnt = 0;

void dfs(int u){
    cnt++;
    used[u] = true;
    for(int v : ke[u]){
        if(!used[v]){
            dfs(v);
        }
    }
}

void solve(){
    cnt = 0;
    memset(ke, 0, sizeof(ke));
    memset(used, false, sizeof(used));
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        int x, y; cin>>x>>y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    int sum = 0;
    for(int i=1; i<=n; i++){
        if(!used[i]){
            cnt = 0;
            dfs(i);
            sum += cnt * (cnt - 1) / 2;
        }
    }
    cout<<(sum == m ? "YES" : "NO");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        solve();
        cout<<endl;
    }

    return 0;
}
