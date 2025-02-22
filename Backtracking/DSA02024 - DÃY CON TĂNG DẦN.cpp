#include <bits/stdc++.h>
using namespace std;

int n, a[100], x[100];
vector<string> v;

void ql(int i, int bd){
    for(int j=bd; j<=n; j++){
        if(a[x[i-1]] < a[j]){
            x[i] = j;
            if(i>=2){
                string tmp = "";
                for(int u=1; u<=i; u++){
                    tmp += to_string(a[x[u]]) + " ";
                }
                v.push_back(tmp);
            }
            ql(i+1, j+1);
        }
    }
}

void solve(){
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    ql(1,1);
    sort(v.begin(), v.end());
    for(string x : v) cout<<x<<endl;
    v.clear();
}

int main(){
    int t=1;
    while(t--){
        solve();
        cout<<endl;
    }
}
