#include<bits/stdc++.h>
using namespace std;

int check(string s){
    stack<int> st;
    st.push(-1);
    int res = -1;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '('){
            st.push(i);
        }
        else{
            st.pop();
            if(st.empty()) st.push(i);
            res = max(res, i-st.top());
        }
    }
    return res;
}

void solve(){
    string s; cin>>s;
    cout<<check(s);
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}