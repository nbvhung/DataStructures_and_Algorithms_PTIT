#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 1e9+7;
int n, k, x[1001];
vector<pair<string,int>> v;
int cnt=0;

void ql(int i){
    for(int j=x[i-1]+1; j<=n-k+i; j++){
        x[i] = j;
        if(i == k){
            string tmp = "";
            cnt++;
            for(int i=1; i<=k; i++){
                tmp += to_string(x[i]);
            }
            v.push_back({tmp, cnt});
        }
        else ql(i+1);
    }
}

void solve(){
    v.clear(); cnt=0;
    cin>>n>>k;
    string s = "";
    for(int i=1; i<=k; i++){
        int x; cin>>x;
        s += to_string(x);
    }
    ql(1);
    for(auto it : v){
        if(s == it.first){
            cout<<it.second;
            return;
        }
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
