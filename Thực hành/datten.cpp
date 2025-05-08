#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, x[1001];
bool used[1001];
vector<string> v;
vector<vector<string>> res;

void ql(int i, string s){
    for(int j=1; j<=n; j++){
        if(!used[j]){
            x[i] = j;
            used[j] = true;
            if(i == n){
                vector<string> tmp;
                tmp.push_back(s);
                for(int u=1; u<=i; u++){
                    tmp.push_back(v[x[u]-1]);
                }
                res.push_back(tmp);
            }
            else{
                ql(i+1, s);
            }
            used[j] = false;
        }
    }
}

void solve(){
    for(int i=1; i<=n; i++) x[i] = i;
    cin>>n;
    cin.ignore();
    string s; getline(cin, s);
    string w; cin>>w;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        if(tmp != w){
            v.push_back(tmp);
        }
    }
    n = v.size();
    ql(1, w);
    sort(res.begin(), res.end());
    for(auto it : res){
        for(string x : it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int t=1;
    while(t--){
        solve();
        
    }

    return 0;
}