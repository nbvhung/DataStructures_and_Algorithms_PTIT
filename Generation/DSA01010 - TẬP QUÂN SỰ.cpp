#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, k, x[101], cnt=1;
vector<int> a;
vector<pair<int, vector<int>>> v;

void ql(int i){
    for(int j=x[i-1]+1; j<=n-k+i; j++){
        x[i] = j;
        if(i == k){
            vector<int> tmp(x+1, x+i+1);
            v.push_back({cnt, tmp});
            cnt++;
        }
        else{
            ql(i+1);
        }
    }
}

void solve(){
    v.clear();
    cin>>n>>k;
    a.resize(k);
    for(int i=0; i<k; i++) cin>>a[i]; 
    x[0] = 0; 
    ql(1);

    int pos = -1;
    for(int i=0; i<v.size(); i++){
        if(v[i].second == a){
            pos = i;
            break;
        }
    }

    if(pos == v.size()-1){
        cout<<k; return;
    }

    vector<int> next = v[pos+1].second;
    int res = 0;
    for(int x : a){
        if(!binary_search(next.begin(), next.end(), x)){
            res++;
        }
    }

    cout<<res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin>>t;
    while (t--) {
        solve();
        cout << '\n';
    }
    return 0;
}
