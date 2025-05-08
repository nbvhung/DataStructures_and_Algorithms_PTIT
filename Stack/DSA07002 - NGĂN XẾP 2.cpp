#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    stack<int> st;
    int n; cin>>n;
    while(cin>>s){
        if(s == "PUSH"){
            cin>>n;
            st.push(n);
        }
        else if(s == "POP" && !st.empty()){
            st.pop();
        }
        else if(s == "PRINT"){
            if(st.empty()) cout<<"NONE\n";
            else{
                cout<<st.top()<<endl;
            }
        }
    }
}

int main(){
    int t=1;
    while(t--){
        solve();
    }
}