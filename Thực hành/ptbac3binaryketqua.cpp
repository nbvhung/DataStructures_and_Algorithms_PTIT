#include <bits/stdc++.h>
using namespace std;
using ll = long long;

double f(double x, int a, int b, int c){
    return a*x*x*x + b*x - c;
}

void solve(){
    int a, b, c; cin>>a>>b>>c;
    double l=0, r=1e9, mid;
    for(int i=0; i<=100; i++){
        mid = (l+r)/2;
        if(f(mid, a, b, c) < 0){
            l = mid;
        }
        else r = mid;
    }
    cout<<fixed<<setprecision(4)<<mid;
}

int main() {
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }

    return 0;
}