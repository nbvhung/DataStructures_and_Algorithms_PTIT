#include <bits/stdc++.h>
using namespace std;

int x[1003], used[1001];
string s;
int n;
vector<string> v;

void ql(int i){
    for(int j=1; j<=n; j++){
        if(!used[j]){
            x[i] = j;
            used[j] = 1;
            if(i == n){
                string tmp = "";
                for(int i=1; i<=n; i++){
                    tmp += char(x[i]+'A'-1);
                }
                v.push_back(tmp);
            }
            else{
                ql(i+1);
            }
            used[j] = 0;
        }
    }
}

void solve(){
    cin>>s;
    n = s.size();
    for(int i=1; i<=n; i++){
        x[i] = s[i-1] - 'A' + 1;
    }
    ql(1);
    for(string x : v) cout<<x<<" ";
    v.clear();
    memset(used, 0, sizeof(used));
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
