#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAX = 10005;

ll ugly[MAX];

void precompute() {
    ugly[1] = 1;
    int i2 = 1, i3 = 1, i5 = 1;
    ll next2 = 2, next3 = 3, next5 = 5;

    for(int i = 2; i < MAX; i++) {
        ugly[i] = min({next2, next3, next5});
        if(ugly[i] == next2) {
            i2++;
            next2 = ugly[i2] * 2;
        }
        if(ugly[i] == next3) {
            i3++;
            next3 = ugly[i3] * 3;
        }
        if(ugly[i] == next5) {
            i5++;
            next5 = ugly[i5] * 5;
        }
    }
}

void solve() {
    int t; cin >> t;
    precompute();
    while(t--) {
        int n; cin >> n;
        cout << ugly[n] << '\n';
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}