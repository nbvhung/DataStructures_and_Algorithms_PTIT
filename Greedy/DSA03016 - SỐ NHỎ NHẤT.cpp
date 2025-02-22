#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

void solve(){
    int s, d; cin>>s>>d;
    if(9*d < s){
        cout<<-1; return;
    }
    string res = string(d, '0');
    for(int i=d-1; i>=0; i--){
        if(s > 9){
            res[i] = '9';
            s -= 9;
        }
        else{
            if(i == 0){
                res[i] = s + '0';
                cout<<res; return;
            }
            else{
                res[0] = '1';
                --s;
                res[i] = s + '0';
                cout<<res; return;
            }
        }
    }
}

int main() {
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
