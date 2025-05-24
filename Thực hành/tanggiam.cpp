#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(string s, int test){
    stack<int> st;
    string res = "";
    int num = 1;
    for(char x : s){
        st.push(num++);
        if(x == 'I'){
            while(!st.empty()){
                res += (st.top() + '0');
                st.pop();
            }
        }
    }
    st.push(num++);
    while(!st.empty()){
        res += (st.top() + '0');
        st.pop();
    }
    cout<<"Test "<<test<<": "<<res<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin>>t;
    for(int i=1; i<=t; i++){
        string s; cin>>s;
        solve(s, i);
        // cout<<endl;
    }
    
    return 0;
}