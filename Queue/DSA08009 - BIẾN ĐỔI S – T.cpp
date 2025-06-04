#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int s, t; cin>>s>>t;
    bool used[200005] = {false};
    if(s >= t){
        cout<<s-t;
        return;
    }
    queue<pair<int, int>> q;
    q.push({s, 0});
    while(!q.empty()){
        auto tmp = q.front(); q.pop();
        if(tmp.first == t){
            cout<<tmp.second;
            return;
        }
        if(!used[tmp.first-1] && tmp.first-1>0){
            q.push({tmp.first-1, tmp.second+1});
            used[tmp.first-1] = true;
        }
        if(!used[tmp.first*2] && tmp.first < t){
            q.push({tmp.first*2, tmp.second+1});
            used[tmp.first*2] = true;
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