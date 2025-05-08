#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int pri(char c){
    if(c == '*' || c == '/') return 2;
    if(c == '+' || c == '-') return 1;
    return 0;
}

vector<string> tokenize(string s) {
    vector<string> v;
    string num = "";
    for (char c : s) {
        if (isdigit(c)) {
            num += c;
        } else {
            if (!num.empty()) {
                v.push_back(num);
                num = "";
            }
            if (c != ' ') {
                v.push_back(string(1, c));
            }
        }
    }
    if (!num.empty()) v.push_back(num);
    return v;
}

vector<string> rev(vector<string> tmp){
    stack<string> st;
    vector<string> v;
    for(string x : tmp){
        if(x == "("){
            st.push(x);
        }
        else if(isdigit(x[0])){
            v.push_back(x);
        }
        else if(x == ")"){
            while(st.top() != "("){
                v.push_back(st.top()); st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && pri(st.top()[0]) >= pri(x[0])){
                v.push_back(st.top()); st.pop();
            }
            st.push(x);
        }
    }
    while(!st.empty()){
        v.push_back(st.top()); st.pop();
    }
    return v;
}

ll kq(vector<string> v){
    stack<ll> st;
    for(string c : v){
        if(isdigit(c[0])){
            st.push(stoll(c));
        }
        else{
            ll x = st.top(); st.pop();
            ll y = st.top(); st.pop();
            if(c=="+"){
                st.push(y+x);
            }
            else if(c=="-") st.push(y-x);
            else if(c=="*") st.push(y*x);
            else st.push(y/x);
        }
    }
    return st.top();
}

void solve(){
    string s; cin>>s;
    vector<string> v = tokenize(s);
    vector<string> res = rev(v);
    cout<<kq(res);
}

int main() {
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}