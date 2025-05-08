#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;
int n, k;
int F[101][50001];

void init(){
    for(int i=1; i<=9; i++){
        F[1][i] = 1;
    }

    for(int i=1; i<=100; i++){
        for(int j=0; j<=9; j++){
            for(int k=j; k<=50000; k++){
                F[i][k] += (F[i-1][k-j] % mod);
                F[i][k] %= mod;
            }
        }
    }
}

int main(){
    init();
    int t; cin >> t;
    while(t--){
        cin>>n>>k;
        cout<<F[n][k]<<endl;
    }
}
