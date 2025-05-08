#include <bits/stdc++.h>
using namespace std;

struct Job {
    int id, deadline, profit;
};

bool cmp(Job a, Job b) {
    return a.profit > b.profit; 
}

void solve() {
    int n;
    cin >> n;
    vector<Job> jobs(n);
    int maxDeadline = 0;

    for (int i = 0; i < n; ++i) {
        cin >> jobs[i].id >> jobs[i].deadline >> jobs[i].profit;
        maxDeadline = max(maxDeadline, jobs[i].deadline);
    }

    sort(jobs.begin(), jobs.end(), cmp);

    vector<int> used(maxDeadline + 1, 0); 
    int cnt = 0, res = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = jobs[i].deadline; j > 0; --j) {
            if (!used[j]) {
                used[j] = 1;
                cnt++;
                res += jobs[i].profit;
                break;
            }
        }
    }

    cout << cnt << " " << res;
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