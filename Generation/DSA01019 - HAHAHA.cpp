#include <bits/stdc++.h>
using namespace std;

int x[1001], n;
bool ok=false;

void sinh(){
    int i=n;
    while(i>=1 && x[i]==1){
        x[i] = 0;
        i--;
    }
    if(i==0) ok = true;
    else{
        x[i] = 1;
    }
}

bool check(){
    if(x[1]==0 || x[n]==1) return false;
    for(int i=1; i<n; i++){
        if(x[i] == 1 && x[i+1] == 1)
            return false;
    }
    return true;
}


void solve(){
    cin>>n;
    for(int i=1; i<=n; i++){
        x[i] = 0;
    }
    ok=false;
    while(!ok){
        if(check()){
            for(int i=1; i<=n; i++){
                if(x[i] == 1) cout<<"H";
                else cout<<"A";
            }
            cout<<endl;
        }
        sinh();
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        // cout<<endl;
    }
}
