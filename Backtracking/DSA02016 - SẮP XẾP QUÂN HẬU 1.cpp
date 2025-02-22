#include <bits/stdc++.h>
using namespace std;

int n, doc[101], d1[101], d2[101], cnt=0;

void ql(int i){
    for(int j=1; j<=n; j++){
        if(!doc[j] && !d1[i-j+n] && !d2[i+j-1]){
            doc[j] = d1[i-j+n] = d2[i+j-1] = 1;
            if(i==n){
                cnt++;
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
    cnt=0;
    cin>>n;
    ql(1);
    cout<<cnt;
    
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
