#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    queue<int> q;
    while(n--){
        int x; cin>>x;
        if(x == 1){
            cout<<q.size()<<endl;
        }
        else if(x == 2){
            cout<<(q.empty() ? "YES\n" : "NO\n");
        }
        else if(x == 3){
            int tmp;
            cin>>tmp; q.push(tmp);
        }
        else if(x == 4){
            if(!q.empty()){
                q.pop();
            }
        }
        else if(x == 5){
            cout<<(!q.empty() ? q.front() : -1)<<endl;
        }
        else{
            cout<<(!q.empty() ? q.back() : -1)<<endl;
        }
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}