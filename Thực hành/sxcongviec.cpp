#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct job {
    int deadline, profit;
};

bool cmp(job a, job b){
    return a.deadline < b.deadline;
}

void solve(){
    int n; cin>>n;
    job a[n];
    for(int i=0; i<n; i++){
        cin>>a[i].deadline>>a[i].profit;
    }
    sort(a, a+n, cmp);
    priority_queue<int, vector<int>, greater<int>> q;
    for(auto it : a){
        q.push(it.profit);
        if(q.size() > it.deadline){
            q.pop();
        }
    }

    ll res = 0;
    while(!q.empty()){
        res += q.top();
        q.pop();
    }
    cout<<res;
}

int main() {
    solve();
    return 0;
}