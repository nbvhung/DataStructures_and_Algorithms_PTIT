#include <bits/stdc++.h>
using namespace std;
using pip = pair<int,pair<int,int>>;

int n, m, a[501][501], d[505][505];
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

void Dijkstra(){
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            d[i][j] = 1e9;
        }
    }

    priority_queue<pip, vector<pip>, greater<pip>> q;
    q.push({a[1][1], {1, 1}});
    d[1][1] = a[1][1];
    while(!q.empty()){
        auto it = q.top(); q.pop();
        int len = it.first;
        int i = it.second.first, j = it.second.second;
        if(len > d[i][j]) continue;
        for(int k=0; k<4; k++){
            int i1 = i + dx[k], j1 = j + dy[k];
            if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m){
                if(d[i1][j1] > d[i][j] + a[i1][j1]){
                    d[i1][j1] = d[i][j] + a[i1][j1];
                    q.push({d[i1][j1], {i1, j1}});
                }
            }
        }
    }
    cout<<d[n][m];
}

void solve(){
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>a[i][j];
        }
    }
    Dijkstra();
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
}