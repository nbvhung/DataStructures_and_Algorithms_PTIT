#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, k, x[1001];
char c;
bool used[1001];
vector<vector<int>> v;

void ql(int i, int bd){
    for(int j=bd; j<=n; j++){
        x[i] = j;
        if(i == k){
            vector<int> tmp(x+1, x+i+1);
            v.push_back(tmp);
        }
        else ql(i+1, j);
    }
}

void solve(){
    cin>>c>>k;
    n = (int)(c-'A'+1);
    ql(1, 1);
    for(auto it : v){
        for(int x : it){
            cout<<(char)(x+'A'-1);
        }
        cout<<endl;
    }
}

int main(){
    int t=1;
    while(t--){
        solve();
        cout<<endl;
    }
}
