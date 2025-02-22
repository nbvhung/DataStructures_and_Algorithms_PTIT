#include <bits/stdc++.h>
using namespace std;

int n, a[101][101];
string s="";
vector<string> v;

void ql(int i, int j){
    if(i==n && j==n){
        v.push_back(s);
    }
    if(i+1<=n && a[i+1][j] == 1){
        a[i+1][j] = 0;
        s += "D";
        ql(i+1, j);
        a[i+1][j] = 1;
        s.pop_back();
    }
    if(j+1<=n && a[i][j+1] == 1){
        a[i][j+1] = 0;
        s += "R";
        ql(i, j+1);
        a[i][j+1] = 1;
        s.pop_back();
    }
}

void solve(){
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
        }
    }
    s = "";
    if(a[1][1] == 0 || a[n][n] == 0){
        cout<<-1; return;
    }
    a[1][1] = 0;
    ql(1, 1);
    sort(v.begin(), v.end());
    if(v.size() == 0){
        cout<<-1; return;
    }
    for(string x : v) cout<<x<<" ";
    v.clear();
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
