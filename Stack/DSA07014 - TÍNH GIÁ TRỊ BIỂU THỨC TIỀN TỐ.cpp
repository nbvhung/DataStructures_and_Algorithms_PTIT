#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    stack<int> st;
    for (int i=s.size()-1; i>=0; i--) {
        if (isdigit(s[i])) {
            st.push(s[i] - '0');
        } else {
            int x = st.top(); st.pop();
            int y = st.top(); st.pop();
            if (s[i] == '+') st.push(x + y);
            else if (s[i] == '-') st.push(x - y);
            else if (s[i] == '*') st.push(x * y);
            else if (s[i] == '/') st.push(x / y);
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
