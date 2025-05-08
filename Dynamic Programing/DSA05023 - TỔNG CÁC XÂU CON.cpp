#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll sum = 0;
char x[15];
string s;
int k;

void Try(int i){

    for(int j = i - 1; j < s.size(); ++j){
        x[i] = s[j];
        ll tmp = 0;
        for(int j = k; j <= i; ++j) tmp = tmp * 10 + x[j] - '0';
        sum += tmp;
        Try(i + 1);
        j = s.size() - 1;
    }
}

void solve(){
    sum = 0;
    cin >> s;
    for(k = 1; k <= s.size(); ++k) Try(k);
    cout << sum;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout<<endl;
    }
}
