#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, a[10][10];

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

string path = "ULRD", s = "";
vector<string> v;

void ql(int i, int j){
    if(i == n && j == n){
        v.push_back(s);
    }
    else{
        for(int k=0; k<4; k++){
            int i1 = i + dx[k], j1 = j + dy[k];
            if(i1>=1 && i1<=n && j1>=1 && j1<=n && a[i1][j1] == 1){
                a[i1][j1] = 0;
                s += path[k];
                ql(i1, j1);
                a[i1][j1] = 1;
                s.pop_back();
            }
        }
    }
}

void solve(){
    v.clear();
    s = "";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
        }
    }
    a[1][1] = 0;
    ql(1, 1);
    if(v.size() == 0){
        cout<<-1; 
    }
    else{
        sort(v.begin(), v.end());
        for(string x : v){
            cout<<x<<" ";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin>>t;
    while (t--) {
        solve();
        cout << '\n';
    }
    return 0;
}
