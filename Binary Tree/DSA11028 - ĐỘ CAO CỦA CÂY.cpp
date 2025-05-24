#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> ke[100001];
int n;

int ans = 0;
void dfs(int u, int h){
    for(int v : ke[u]){
        ans = max(ans, h);
        dfs(v, h+1);
    }
}

void solve() {
    memset(ke, 0, sizeof(ke));
    ans = 0;
    cin>>n;
    for(int i=1; i<=n-1; i++){
        int x, y; cin>>x>>y;
        ke[x].push_back(y);
    }
    dfs(1, 1);
    cout<<ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
        cout<<endl;
    }
    return 0;
}