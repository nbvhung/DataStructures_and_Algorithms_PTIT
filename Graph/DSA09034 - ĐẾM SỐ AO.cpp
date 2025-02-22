#include <bits/stdc++.h>
using namespace std;

int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};
int n,m, cnt=0;
char a[101][101];

void loang(int i, int j){
    a[i][j] = '.';

    for(int k=0; k<8; k++){
        int i1 = i + dx[k], j1 = j + dy[k];
        if(i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1] == 'W'){
            loang(i1,j1);
        }
    }
}


void solve(){
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>a[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(a[i][j] == 'W'){
                cnt++;
                loang(i,j);
            }
        }
    }
    cout<<cnt;
}

int main(){
    int t=1;
    while(t--){
        solve();
        cout<<endl;
    }
}
