#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    unordered_set<int> se;
    queue<pair<int, int>> q;
    int n; cin>>n;
    q.push({n, 0});
    while(!q.empty()){
        auto tmp = q.front(); q.pop();
        if(tmp.first == 1){
            cout<<tmp.second; return;
        }
        if(!se.count(tmp.first - 1) && tmp.first - 1 > 0){
            q.push({tmp.first-1, tmp.second+1});
            se.insert(tmp.first-1);
        }
        for(int i=2; i<=sqrt(tmp.first); i++){
            if(tmp.first % i == 0){
                int u = max(i, tmp.first / i);
                if(!se.count(u)){
                    q.push({u, tmp.second + 1});
                    se.insert(u);
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
        cout<<'\n';
    }
    return 0;
}
