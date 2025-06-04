#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    set<int> se;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x, y; char c;
        cin>>x>>y>>c;
        se.insert(x);
        se.insert(y);
    }
    for(int x : se) cout<<x<<" ";
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
        cout<<endl;
	}
}

