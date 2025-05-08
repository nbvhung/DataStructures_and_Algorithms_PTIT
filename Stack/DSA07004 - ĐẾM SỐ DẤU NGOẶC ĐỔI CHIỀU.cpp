#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    stack<char> st;
    string s; cin>>s;
    int cnt1 = 0, cnt2 = 0;
    for(char x : s){
        if(x == ')' && !st.empty() && st.top() == '('){
            st.pop();
        }
        else st.push(x);
    }
    while(!st.empty()){
        int x = st.top(); st.pop();
        if(x == ')') cnt1++;
        else cnt2++;
    }
    cout<<(cnt1+1)/2 + (cnt2+1)/2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}
