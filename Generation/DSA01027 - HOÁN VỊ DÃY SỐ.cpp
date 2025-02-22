#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 1e9+7;
int n, x[1001], used[1001], a[1001];
vector<vector<int>> v;

void ql(int i){
    for(int j=1; j<=n; j++){
        if(!used[j]){
            used[j] = 1;
            x[i] = j;
            if(i == n){
                for(int i=1; i<=n; i++){
                    cout<<a[x[i]]<<" ";
                }
                cout<<endl;
            }
            else{
                ql(i+1);
            }
            used[j] = 0;
        }
    }
}

void solve(){
    v.clear();
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    sort(a+1, a+n+1);
    ql(1);
}

int main(){
    int t=1;
    while(t--){
        solve();
        cout<<endl;
    }
}
