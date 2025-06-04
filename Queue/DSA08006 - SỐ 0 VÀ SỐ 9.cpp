#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<string> v;

void solve(){
    int n; cin>>n;
    queue<string> q;
    q.push("9");
    while(!q.empty()){
        string tmp = q.front(); q.pop();
        if(stoll(tmp) % n == 0){
            cout<<tmp; return;
        }
        v.push_back(tmp);
        q.push(tmp + "0");
        q.push(tmp + "9");
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
