#include <bits/stdc++.h>
using namespace std;

bool F[1001][1001];

void solve(){
    string s; cin>>s;
    
    s = "0" + s;
    int n = s.size();
    int res = 1;
    for(int i=1; i<=n; i++) F[i][i] = 1;
    for(int len = 2; len<=n; len++){
        for(int i=1; i<=n-len+1; i++){
            int j = len+i-1;
            if(len == 2){
                F[i][j] = (s[i] == s[j]);
            }
            else{
                F[i][j] = (s[i] == s[j]) && F[i+1][j-1]; 
            }
            if(F[i][j] == 1){
                res = max(res, len);
            }
        }
    }
    cout<<res;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

bool F[1001][1001];

void solve(){
    string s; cin>>s;
    
    s = "0" + s;
    int n = s.size();
    int res = 1;
    for(int i=1; i<=n; i++) F[i][i] = 1;
    for(int len = 2; len<=n; len++){
        for(int i=1; i<=n-len+1; i++){
            int j = len+i-1;
            if(len == 2){
                F[i][j] = (s[i] == s[j]);
            }
            else{
                F[i][j] = (s[i] == s[j]) && F[i+1][j-1]; 
            }
            if(F[i][j] == 1){
                res = max(res, len);
            }
        }
    }
    cout<<res;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
