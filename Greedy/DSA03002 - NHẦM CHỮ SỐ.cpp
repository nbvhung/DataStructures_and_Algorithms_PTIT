#include <bits/stdc++.h>
using namespace std;

int nhonhat(int a){
    string s = to_string(a);
    for(int i=0; i<s.size(); i++){
        if(s[i] == '6'){
            s[i] = '5';
        }
    }
    return stoi(s);
}

int lonnhat(int a){
    string s = to_string(a);
    for(int i=0; i<s.size(); i++){
        if(s[i] == '5'){
            s[i] = '6';
        }
    }
    return stoi(s);
}

void solve(){
    int a, b; cin>>a>>b;
    int n1 = nhonhat(a), n2 = nhonhat(b), l1 = lonnhat(a), l2 = lonnhat(b);
    cout<<n1+n2<<" "<<l1+l2;
}

int main(){
    int t=1;
    while(t--){
        solve();
        cout<<endl;
    }
}