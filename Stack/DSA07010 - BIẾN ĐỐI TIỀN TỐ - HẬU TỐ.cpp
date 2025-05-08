#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin>>s;
    stack<string> st;
    for(int i=s.size()-1; i>=0; i--){
        if(isalpha(s[i])){
            st.push(string(1, s[i]));
        }
        else{
            string x = st.top(); st.pop();
            string y = st.top(); st.pop();
            string res = x + y + s[i];
            st.push(res);
        }
    }
    cout<<st.top();
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}