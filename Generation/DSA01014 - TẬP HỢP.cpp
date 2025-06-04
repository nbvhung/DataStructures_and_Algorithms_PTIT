#include <bits/stdc++.h>
using namespace std;

int n, k, s, cnt;

void ql(int bd, int sum, int dem) {
    if (dem == k) {
        if (sum == s) cnt++;
        return;
    }
    for (int j = bd; j <= n; ++j) {
        if (sum + j > s) break; 
        ql(j + 1, sum + j, dem + 1);
    }
}

void solve() {
    while (1){
        cin>>n>>k>>s;
        if (n == 0 && k == 0 && s == 0) return;
        cnt = 0;
        ql(1, 0, 0);
        cout << cnt << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
