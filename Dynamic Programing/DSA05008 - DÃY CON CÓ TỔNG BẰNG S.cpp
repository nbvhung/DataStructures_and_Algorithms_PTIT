#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<bool> F(s + 1, false);
    F[0] = true;  

    for (int num : a) {
        for (int j = s; j >= num; j--) {  
            if (F[j - num]) {
                F[j] = true;
            }
        }
    }

    cout << (F[s] ? "YES\n" : "NO\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}