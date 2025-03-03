#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin>>n;
    queue<string> q;
    q.push("9");
    while(!q.empty()){
        string x = q.front(); q.pop();
        if(stoll(x) % n == 0){
            cout<<x; return;
        }
        q.push(x+"0");
        q.push(x+"9");
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}