#include<bits/stdc++.h>
using namespace std;

int n, p, s, x[1001], prime[1000001];
vector<int> nt1, nt2;
vector<vector<int>> v;
vector<int> tmp;

void sang(){
    prime[0] = prime[1] = 1;
    for(int i=2; i<=1000; i++){
        if(!prime[i]){
            for(int j=i*i; j<=1000000; j+=i){
                prime[j] = 1;
            }
        }
    }
    for(int i=2; i<=1000; i++){
        if(!prime[i]) nt1.push_back(i);
    }
}

void ql(int bd, int sum){
    if(tmp.size() == n){
        if(sum == s) v.push_back(tmp);
        return;
    }
    for(int i=bd; i<nt2.size(); i++){
        if(sum + nt2[i] > s) break;
        tmp.push_back(nt2[i]);
        ql(i+1, sum+nt2[i]);
        tmp.pop_back();
    }
}

void solve(){
    cin>>n>>p>>s;
    nt2.clear();
    v.clear();
    tmp.clear();
    for(int x : nt1){
        if(x > p){
            nt2.push_back(x);
        }
    }
    ql(0,0);
    cout<<v.size()<<endl;
    for(auto it : v){
        for(int x : it){
            cout<<x<<" "; 
        }
        cout<<endl;
    }
}

int main(){
    sang();
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}