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
    vector<string> v;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    for(int i=v.size()-1; i>=0; i--){
        if(so(v[i])){
            st.push(stoll(v[i]));
        }
        else{
            if(st.size() >= 2){
                ll y = st.top(); st.pop();
                ll x = st.top(); st.pop();
                if (v[i] == "+") st.push(y + x);
                else if (v[i] == "-") st.push(y - x);
                else if (v[i] == "*") st.push(y * x);
                else if (v[i] == "/") st.push(y / x);
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
