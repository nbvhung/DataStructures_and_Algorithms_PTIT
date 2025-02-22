#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

void solve(){
    int k; cin>>k;
    string s; cin>>s;
    map<char, int> mp;
    for(char x : s){
        mp[x]++;
    }
    vector<int> v;
    for(auto x : mp){
        v.push_back(x.second);
    }
    while(k--){
        sort(v.begin(), v.end());
        --v[v.size()-1];
    }
    int res = 0;
    for(int x : v){
        res += x*x;
    }
    cout<<res;
}

int main() {
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
