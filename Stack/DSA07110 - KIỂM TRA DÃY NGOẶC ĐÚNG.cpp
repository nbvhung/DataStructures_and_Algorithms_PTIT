#include<bits/stdc++.h>
using namespace std;

bool valid(char x, char y){
    return ((x=='(' && y==')') || (x=='[' && y==']') || (x=='{' && y=='}'));
}

bool check(string s){
    stack<char> st;
    for(char x : s){
        if(x == '(' || x=='[' || x=='{') st.push(x);
        else {
            if(st.empty()) return false;
            char y = st.top(); st.pop();
            if(!valid(y, x)) return false;
        }
    }
    return true;
}

void solve(){
    string s; cin>>s;
    cout<<(check(s) ? "YES\n" : "NO\n");
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}