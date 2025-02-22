#include <bits/stdc++.h>
using namespace std;

int n, x[1003], used[1001];
vector<string> v;

void ql(int i){
    for(int j=1; j<=n; j++){
        if(!used[j]){
            x[i] = j;
            used[j] = 1;
            if(i == n){
                string tmp = "";
                for(int i=1; i<=n; i++){
                    tmp += to_string(x[i]);
                }
                v.push_back(tmp);
            }
            else{
                ql(i+1);
            }
            used[j] = 0;
        }
    }
}

void solve(){
    cin>>n;
    for(int i=1; i<=n; i++) x[i] = i;
    ql(1);
    for(int i=v.size()-1; i>=0; i--){
        cout<<v[i]<<" ";
    }
    v.clear();
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
