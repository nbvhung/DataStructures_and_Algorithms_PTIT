#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string s; cin>>s;
    stack<string> st;
    for(int i=0; i<s.size(); i++){
        if(isalpha(s[i])){
            st.push(string(1, s[i]));
        }
        else{
            string x = st.top(); st.pop();
            string y = st.top(); st.pop();
            st.push(s[i] + y + x);
        }
    }
    cout<<st.top();
}

int main() {
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}