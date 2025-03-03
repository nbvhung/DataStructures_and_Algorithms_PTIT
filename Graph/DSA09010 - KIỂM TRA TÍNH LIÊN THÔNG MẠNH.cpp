#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> ke[1001], t_ke[1001];
int n, m;
bool used[1001];
stack<int> st;

void dfs1(int u){
    used[u] = true;
    for(int v : ke[u]){
        if(!used[v]){
            dfs1(v);
        }
    }
    st.push(u);
}

void dfs2(int u){
    used[u] = true;
    for(int v : t_ke[u]){
        if(!used[v]){
            dfs2(v);
        }
    }
}

void solve(){
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        int x, y; cin>>x>>y;
        ke[x].push_back(y);
        t_ke[y].push_back(x);
    }
    for(int i=1; i<=n; i++){
        if(!used[i]){
            dfs1(i);
        }
    }
    memset(used, false, sizeof(used));
    int cnt = 0;
    while(!st.empty()){
        int u = st.top(); st.pop();
        if(!used[u]){
            dfs2(u);
            cnt++;
        }
    }
    cout<<(cnt==1?"YES":"NO");
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
