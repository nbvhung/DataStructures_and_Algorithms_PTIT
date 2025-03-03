#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> v;

bool check(string s) {
    for (int i = 1; i < s.size(); i++) {
        if (abs(s[i] - s[i - 1]) == 1) return false;
    }
    return true;
}

void solve() {
    cin >> n;
    string s = "";
    for (int i = 1; i <= n; i++) s += to_string(i);
    
    v.clear();
    do {
        if (check(s)) v.push_back(s);
    } while (next_permutation(s.begin(), s.end()));

    for (const string &x : v) cout << x << endl;
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