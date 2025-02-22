#include <bits/stdc++.h>
using namespace std;

int p[1000005];

void sang(){
    for(int i=0; i<=1000000; i++) p[i] = 1;
    p[0] = p[1] = 0;
    for(int i=2; i<=1000; i++){
        if(p[i]){
            for(int j=i*i; j<=1000000; j+=i){
                p[j] = 0;
            }
        }
    }
}

void solve(){
    int n; cin>>n;
    for(int i=2; i<=n/2; i++){
        if(p[i] && p[n-i]){
            cout<<i<<" "<<n-i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main(){
    sang();
    int t; cin>>t;
    while(t--){
        solve();
    }
}
