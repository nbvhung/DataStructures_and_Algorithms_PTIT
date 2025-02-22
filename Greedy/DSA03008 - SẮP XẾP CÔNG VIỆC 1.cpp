#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(pair<int,int> a, pair<int, int> b){
    return a.second < b.second;
}

void solve(){
    int n; cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++) cin>>v[i].first;
    for(int i=0; i<n; i++) cin>>v[i].second;
    sort(v.begin(), v.end(), cmp);
    // for(auto it : v) cout<<it.first<<" "<<it.second<<endl;
    int cnt=1, end_time = v[0].second;
    for(int i=1; i<n; i++){
        if(v[i].first >= end_time){
            cnt++;
            end_time = v[i].second;
        }
    }
    cout<<cnt;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
