#include <bits/stdc++.h>
using namespace std;
int n, m, p[100005], sz[100005];

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) p[i] = i, sz[i] = 1;
    while (m--) {
        int u, v;
        cin >> u >> v;
        u = find(u);
        v = find(v);
        if (u != v) {
            p[v] = u;
            sz[u] += sz[v];
        }
    }
    int r = 0;
    for (int i = 1; i <= n; i++) {
        if (find(i) != find(1)) r = max(r, sz[find(1)] + sz[find(i)]);
    }
    cout << max(r, sz[find(1)]);
}
