#include<bits/stdc++.h>
using namespace std;
using ll = long long;

char a[505][505];
int n, m, s1, s2, t1, t2;
bool ok = false;

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

void ql(int i, int j, int cnt, int prev_k){
    if(cnt > 3) return;
    if(ok) return;
    if(i == t1 && j == t2){
        ok = true;
        return;
    }
    a[i][j] = '*';
    for(int k=0; k<4; k++){
        int i1 = i + dx[k], j1 = j + dy[k];
        if(i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1] != '*'){
            if(k == prev_k) ql(i1, j1, cnt, k);
            else ql(i1, j1, cnt+1, k);
        }
    }
    a[i][j] = '.';
}

void solve(){
    ok = false;
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>a[i][j];
            if(a[i][j] == 'S'){
                s1 = i; s2 = j;
            }
            else if(a[i][j] == 'T'){
                t1 = i; t2 = j;
            }
        }
    }
    ql(s1, s2, 0, -1);
    cout<<(ok ? "YES" : "NO");
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