#include<bits/stdc++.h>
using namespace std;

int a[100001], F[100001];

int main(){
    int n, q; cin>>n>>q;
    for(int i=1; i<=n; i++) cin>>a[i];
    if(a[1] > 0) F[1] = a[1]; 
    for(int i=2; i<=n; i++){
        if(a[i] > 0) F[i] = F[i-1] + a[i];
        else F[i] = F[i-1];
    }
    while(q--){
        int l, r;
        cin>>l>>r;
        cout<<F[r] - F[l-1]<<endl;
    }
}