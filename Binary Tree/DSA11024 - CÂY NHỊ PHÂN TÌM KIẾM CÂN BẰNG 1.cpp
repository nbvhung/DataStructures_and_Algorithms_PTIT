#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int get(int a[], int l, int r){
    if(l>r) return -1;
    int m = (l+r)/2;
    return a[m];
}

void solve(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    cout<<get(a, 0, n-1);
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
        cout<<endl;
	}
}

