#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 1e9+7;
int n, x[1001];
vector<vector<int>> v;

bool check(vector<int> tmp){
    if(tmp[0] == 0 || tmp[n-1] == 1) return false;
    for(int i=0; i<n-1; i++){
        if(tmp[i]==1 && tmp[i+1]==1) return false;
    }
    for(int i=0; i<n-3; i++){
        if(tmp[i]==0 && tmp[i+1]==0 && tmp[i+2]==0 && tmp[i+3]==0) return false;
    }
    return true;
}

void ql(int i){
    for(int j=0; j<=1; j++){
        x[i] = j;
        if(i==n-1){
            vector<int> tmp(x, x+i+1);
            if(check(tmp)) v.push_back(tmp);
        }
        else ql(i+1);
    }
}

void solve(){
    v.clear();
    cin>>n;
    ql(0);
    for(auto it : v){
        for(int x : it){
            cout << (x == 1 ? 8 : 6);
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
