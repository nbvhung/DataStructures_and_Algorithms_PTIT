#include <bits/stdc++.h>
using namespace std;

int tk(int n, int a[], int x){
    int l=0, r=n-1;
    while(l<=r){
        int m = (l+r)/2;
        if(a[m] == x){
            return m;
        }
        else if(x < a[m]){
            r = m - 1;
        }
        else l = m + 1;
    }
    return -1;
}

void solve(){
    int n,x; cin>>n>>x;
    int a[100001]; 
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    if(tk(n,a,x) != -1){
        cout<<tk(n,a,x)+1<<endl;
    }
    else{
        cout<<"NO\n";
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}
