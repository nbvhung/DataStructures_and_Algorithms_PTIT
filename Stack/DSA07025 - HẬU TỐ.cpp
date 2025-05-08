#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool so(const string& s) {
    if (s.empty()) return false;
    int i = (s[0] == '-') ? 1 : 0;
    if (i == s.size()) return false; 
    for (; i < s.size(); ++i) {
        if (!isdigit(s[i])) return false;
    }
    return true;
}

void solve(){
    stack<ll> st;
    int n; cin>>n;
    cin.ignore();
    string s; getline(cin, s);
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        if(so(tmp)){
            st.push(stoll(tmp));
        }
        else{
            if(st.size() >= 2){
                ll x = st.top(); st.pop();
                ll y = st.top(); st.pop();
                if (tmp == "+") st.push(y + x);
                else if (tmp == "-") st.push(y - x);
                else if (tmp == "*") st.push(y * x);
                else if (tmp == "/") st.push(y / x);
            }
        }
    }
    cout<<st.top();
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        solve();
        cout << endl;
    }
}
