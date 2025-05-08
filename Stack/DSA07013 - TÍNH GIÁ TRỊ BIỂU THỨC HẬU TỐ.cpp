#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    stack<int> st;
    for (char &c : s) {
        if (isdigit(c)) {
            st.push(c - '0');
        } else {
            int x = st.top(); st.pop();
            int y = st.top(); st.pop();
            if (c == '+') st.push(y + x);
            else if (c == '-') st.push(y - x);
            else if (c == '*') st.push(y * x);
            else if (c == '/') st.push(y / x);
        }
    }
    cout << st.top();
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
}
