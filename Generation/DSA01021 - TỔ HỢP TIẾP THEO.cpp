#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 1e9+7;
int n, k, a[1001], b[1001];

void solve(){
    cin>>n>>k;
    for(int i=1; i<=k; i++){
        cin>>a[i];
        b[i] = a[i];
    }
    int i=k; 
    while(i>0 && a[i] == n-k+i){
        i--;
    }
    int cnt=0;
    if(i < 1) cout<<k;
    else{
        ++a[i];
        for(int j=i+1; j<=k; j++){
            a[j] = a[j-1] + 1;
        }
        for(int i=1; i<=k; i++){
            for(int j=1; j<=k; j++){
                if(a[i] == b[j]) cnt++;
            }
        }
        cout<<k-cnt;
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
