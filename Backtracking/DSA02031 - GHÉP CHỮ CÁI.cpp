#include <bits/stdc++.h>
using namespace std;

char c;
string s;
vector<string> v;

bool check(string s) {
    int n = s.size();
    for (int i = 1; i < n - 1; i++) {
        if ((s[i] == 'A' || s[i] == 'E') && (s[i - 1] != 'A' && s[i - 1] != 'E') && (s[i + 1] != 'A' && s[i + 1] != 'E')) {
            return false;
        }
    }
    return true;
}

void solve() {
    cin >> c;
    s = "";
    for (char i = 'A'; i <= c; i++) s += i;
    
    do {
        if (check(s)) v.push_back(s);
    } while (next_permutation(s.begin(), s.end()));

    for (string x : v) cout << x << endl;
}

int main() {
    solve();
    return 0;
}
