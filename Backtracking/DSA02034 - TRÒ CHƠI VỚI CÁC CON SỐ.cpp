#include<bits/stdc++.h>
using namespace std;

int n, x[1001];
bool used[1001];
vector<string> v;

bool check(string s){
    for(int i=1; i<s.size(); i++){
        if(abs((s[i]-'0')-(s[i-1]-'0')) <= 1) return false;
    }
    return true;
}

void ql(int i){
    for(int j=1; j<=n; j++){
        if(!used[j]){
            used[j] = true;
            x[i] = j;
            if(i == n){
                string s = "";
                for(int i=1; i<=n; i++) s += to_string(x[i]);
                if(check(s)){
                    v.push_back(s);
                }
            }
            else ql(i+1);
            used[j] = false;
        }
    }
}

void solve(){
    v.clear();
    cin>>n;
    ql(1);
    for(string x : v) cout<<x<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}