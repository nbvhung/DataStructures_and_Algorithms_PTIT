#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, k;
int x[101];
vector<vector<int>> v;

bool check(vector<int> tmp){
    int cnt = 0, res = 0;
    for(int x : tmp){
        if(x == 0){
            cnt++;
        }
        else cnt = 0;
        if(cnt > k) return false;
        if(cnt == k) res++;
    }
    return res == 1;
}

void ql(int i){
    for(int j=0; j<=1; j++){
        x[i] = j;
        if(i == n){
            vector<int> tmp(x+1, x+i+1);
            if(check(tmp)){
                v.push_back(tmp);
            }
        }
        else ql(i+1);
    }
}

void solve(){
    cin>>n>>k;
    ql(1);
    cout<<v.size()<<endl;
    for(auto it : v){
        for(int x : it){
            if(x == 0) cout<<'A';
            else cout<<'B';
        }
        cout<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    while (t--) {
        solve();
        cout << '\n';
    }
    return 0;
}
