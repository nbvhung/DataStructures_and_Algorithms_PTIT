#include <bits/stdc++.h>
using namespace std;
// 4a+7b = n => b = (n-4a)/7;

void solve() {
    int n; cin>>n;
    bool ok = false;
    for(int i=n/7; i>=0; i--){
        int remain = n-7*i;
        if(remain % 4 == 0){
            int a = remain / 4;
            for(int j=1; j<=a; j++) cout<<4;
            for(int j=1; j<=i; j++) cout<<7;
            ok = true;
            return;
        }
    }
    cout<<-1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}
