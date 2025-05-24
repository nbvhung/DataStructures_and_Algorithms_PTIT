#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool so(string s){
    if(s.size() == 0) return false;
    int i = (s[0] == '-') ? 1 : 0;
    if(i == 1 && s.size() == 1) return false;
    for( ; i<s.size(); i++){
        if(!isdigit(s[i])) return false;
    }
    return true;
}

ll hauto(vector<string> tmp){
    stack<ll> st;
    for(string s : tmp){
        if(so(s)){
            st.push(stoll(s));
        }
        else{
            ll x = st.top(); st.pop();
            ll y = st.top(); st.pop();
            if(s == "+") st.push(y+x);
            else if(s == "-") st.push(y-x);
            else if(s == "*") st.push(y*x);
            else if(s == "/") st.push(y/x);
        }
    }
    return st.top();
}

ll tiento(vector<string> tmp){
    stack<ll> st;
    for(int i=tmp.size()-1; i>=0; i--){
        if(so(tmp[i])){
            st.push(stoll(tmp[i]));
        }
        else{
            ll y = st.top(); st.pop();
            ll x = st.top(); st.pop();
            if(tmp[i] == "+") st.push(y+x);
            else if(tmp[i] == "-") st.push(y-x);
            else if(tmp[i] == "*") st.push(y*x);
            else if(tmp[i] == "/") st.push(y/x);
        }
    }
    return st.top();
}

void solve(){
    int n; cin>>n;
    cin.ignore();
    string s; getline(cin, s);
    stringstream ss(s);
    string tmp; vector<string> v;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    if(so(v[0])){
        cout<<hauto(v);
    }
    else{
        cout<<tiento(v);
    }
    v.clear();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin>>t;
    while (t--) {
        solve();
        cout << '\n';
    }
    return 0;
}
