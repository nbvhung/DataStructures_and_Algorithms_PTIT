#include<bits/stdc++.h>
using namespace std;

int n, m, cnt=0;
char a[1001][1001];

int dx[4] = {-1,0,0,1};
int dy[4] = {0,-1,1,0};

void loang(int i, int j){
    a[i][j] = '.';
    for(int k=0; k<4; k++){
        int i1 = i + dx[k], j1 = j + dy[k];
        if(i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1] == '#'){
            loang(i1,j1);
        }
    }
}

int main(){
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>a[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(a[i][j] == '#'){
                loang(i,j);
                cnt++;
            }
        }
    }
    cout<<cnt;
}