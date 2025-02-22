#include<bits/stdc++.h>
using namespace std;

int F[1001];

int main(){
    int t; t=1;
    while(t--){
        int n; cin>>n;
        int a[n+1];
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        for(int i=1; i<=n; i++) F[i] = 1;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                if(a[j] < a[i]){
                    F[i] = max(F[i], F[j] + 1);
                }
            }
        }
        cout<<*max_element(F+1, F+n+1);
    }
}