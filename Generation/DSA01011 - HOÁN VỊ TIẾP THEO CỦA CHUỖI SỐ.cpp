#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    cout<<n<<" ";
    if (next_permutation(s.begin(), s.end())) {
        cout << s;
    } 
    else{
        cout << "BIGGEST";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin>>t;
    while (t--) {
        solve();
        cout << '\n';
    }
    return 0;
}
