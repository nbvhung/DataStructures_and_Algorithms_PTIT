#include <bits/stdc++.h>
using namespace std;
using ll = long long;


bool check(string s){
    if(s.size() % 2 == 1) return false;
    int l=0, r = s.size()-1;
    while(l<=r){
        if(s[l] != s[r]) return false;
        l++; r--;
    }
    return true;
}

void solve(int len, vector<string> &res, int limit){
    queue<string> q;
    int half = len/2;
    q.push("");

    while(!q.empty()){
        string s = q.front(); q.pop();

        if(s.size() == half){
            string rev = s;
            reverse(rev.begin(), rev.end());
            string ans = s + rev;
            res.push_back(ans);
            if((int)res.size() >= limit) return;
        }
        else{
            q.push(s + "6");
            q.push(s + "8");
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin>>t;
    vector<int> tc(t);
    int max_n = 0;
    for(int i=0; i<t; i++){
        cin>>tc[i];
        max_n = max(max_n, tc[i]);
    }
    

    vector<string> v;
    for(int len = 2; v.size() < max_n; len+=2){
        solve(len, v, max_n);
    }

    for(int i=0; i<t; i++){
        for(int j=0; j<tc[i]; j++){
            cout<<v[j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}