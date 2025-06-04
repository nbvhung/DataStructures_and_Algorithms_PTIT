#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    int a[1001];
    for (int i = 1; i <= k; i++) cin >> a[i];

    int tmp = k;
    while (tmp > 1 && a[tmp - 1] + 1 == a[tmp]) --tmp;

    if (tmp > 0 && a[tmp] > tmp) {
        --a[tmp];
        for (int i = tmp + 1; i <= k; i++) a[i] = n - k + i;
    } else {
        for (int i = 1; i <= k; i++) a[i] = n - k + i;
    }

    for (int i = 1; i <= k; i++) cout << a[i] << " ";
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}