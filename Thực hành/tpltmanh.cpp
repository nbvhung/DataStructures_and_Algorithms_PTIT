#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n,m;
vector<int> ke[10001], t_ke[10001];
bool visited[10001];
stack<int> st;

void dfs1(int u){
    visited[u] = true;
    for(int v : ke[u]){
        if(!visited[v]){
            dfs1(v);
        }
    }
    st.push(u);
}

void dfs2(int u){
    visited[u] = true;
    for(int v : t_ke[u]){
        if(!visited[v]){
            dfs2(v);
        }
    }
}

void kosaraju(){
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            dfs1(i);
        }
    }
    memset(visited, false, sizeof(visited));
    int scc = 0;
    while(!st.empty()){
        int top = st.top(); st.pop();
        if(!visited[top]){
            scc++;
            dfs2(top);
            cout<<endl;
        }
    }
    cout<<scc<<endl;
}

void solve(){
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        int x,y; cin>>x>>y;
        ke[x].push_back(y);
        t_ke[y].push_back(x);
    }   
    memset(visited, false, sizeof(visited));
    kosaraju();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    while (t--) {
        solve();
        // cout << '\n';
    }
    return 0;
}
