#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 1e9+7;
int n, k, x[1001];
vector<pair<string,int>> v;
int cnt=0, used[1001];

void ql(int i){
    for(int j=1; j<=n; j++){
        if(!used[j]){
            used[j] = 1;
            x[i] = j;
            if(i == n){
                string tmp = "";
                cnt++;
                for(int i=1; i<=n; i++){
                    tmp += to_string(x[i]);
                }
                v.push_back({tmp, cnt});
            }
            else ql(i+1);
            used[j] = 0;
        }
    }
}

void solve(){
    v.clear(); cnt=0;
    cin>>n;
    string s = "";
    for(int i=1; i<=n; i++){
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
