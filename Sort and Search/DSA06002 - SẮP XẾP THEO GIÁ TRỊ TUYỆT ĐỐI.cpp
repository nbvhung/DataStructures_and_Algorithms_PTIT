#include <bits/stdc++.h>
using namespace std;

int n,x; 

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.first < b.first;
}

void solve(){
    cin>>n>>x;
    int a[n+1];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<pair<int,int>> v;
    for(int i=0; i<n; i++){
        v.push_back({abs(x-a[i]), a[i]});
    }
    stable_sort(v.begin(), v.end(),cmp);
    for(auto it : v){
        cout<<it.second<<" ";
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
