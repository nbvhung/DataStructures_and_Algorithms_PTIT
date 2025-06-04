#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int n, k, a[15][15], x[1001];
bool used[1001];
vector<vector<int>> v;

void ql(int i){
    for(int j=1; j<=n; j++){
        if(!used[j]){
            used[j] = true;
            x[i] = j;
            if(i == n){
                int sum = 0;
                for(int u=1; u<=i; u++){
                    sum += a[u][x[u]];
                }
                if(sum == k){
                    vector<int> tmp(x+1, x+i+1);
                    v.push_back(tmp);
                }
            }
            else ql(i+1);
            used[j] = false;
        }
    }
}

void solve(){
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
        }
    }
    ql(1);
    cout<<v.size()<<'\n';
    for(auto it : v){
        for(int x : it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t=1;
    while(t--){
        solve();
        cout<<'\n';
    }
    return 0;
}
