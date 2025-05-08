#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    stack<char> st;
    for(char x : s){
        if(x == ')'){
            char top = st.top();
            st.pop();
            bool ok = true;
            while(top != '('){
                if(top == '+' || top == '-' || top == '*' || top == '/')
                    ok = false;
                top = st.top();
                st.pop();
            }
            if(ok) return true; 
        }
        else{
            st.push(x);
        }
    }
    return false; 
}

void solve(){
    string s;
    cin>>s;
    cout<<(check(s) ? "Yes" : "No");
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
        cout << endl;
    }
}
