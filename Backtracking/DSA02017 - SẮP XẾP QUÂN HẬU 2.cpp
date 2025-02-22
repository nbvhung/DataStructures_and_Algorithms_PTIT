#include <bits/stdc++.h>
using namespace std;

int n=8, doc[101], d1[101], d2[101], a[10][10], res = -1e9;
int x[101];
void ql(int i){
    for(int j=1; j<=n; j++){
        if(!doc[j] && !d1[i-j+n] && !d2[i+j-1]){
            x[i] = j;
            doc[j] = d1[i-j+n] = d2[i+j-1] = 1;
            if(i==n){
                int sum = 0;
                for(int k=1; k<=n; k++){
                    sum += a[k][x[k]];
                }
                res = max(res, sum);
            }
            ql(i+1);
            doc[j] = d1[i-j+n] = d2[i+j-1] = 0;
        }
    }
}

void solve(){
    memset(doc, 0 ,sizeof(doc));
    memset(d1, 0 ,sizeof(d1));
    memset(d2, 0 ,sizeof(d2));
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
        }
    }
    ql(1);
    cout<<res;
    res = -1e9;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
