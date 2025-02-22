#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    cin.ignore();
    string s; getline(cin,s);
    set<char> se;
    stringstream ss(s);
    string tmp;
    while(ss>>tmp){
        for(int i=0; i<tmp.size(); i++){
            se.insert(tmp[i]);
        }
    }
    for(char x : se) cout<<x<<" ";
}

int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
        solve();
        cout<<endl;
    }
}
