#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    queue<int> q;
    while(n--){
        string x; cin>>x;
        if(x == "PUSH"){
            int tmp;
            cin>>tmp; q.push(tmp);
        }
        else if(x == "POP"){
            if(!q.empty()){
                q.pop();
            }
        }
        else if(x == "PRINTFRONT"){
            if(q.empty()){
                cout<<"NONE\n";
            }
            else cout<<q.front()<<endl;
        }
    }
}

int main(){
    int t=1;
    while(t--){
        solve();
        cout<<endl;
    }
}