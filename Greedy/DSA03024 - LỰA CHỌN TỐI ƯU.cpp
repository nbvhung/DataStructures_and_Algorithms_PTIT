#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

void solve(){
    int n; cin>>n;
    vector<pair<int,int>> v;
    for(int i=1; i<=n; i++){
        int x, y; cin>>x>>y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end(), cmp);
    int cnt = 1, end_time = v[0].second;
    for(int i=1; i<v.size(); i++){
        if(v[i].first >= end_time){
            cnt++;
            end_time = v[i].second;
        }
    }
    cout<<cnt;
}

int main() {
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}