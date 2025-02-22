#include<bits/stdc++.h>
using namespace std;

int n, ok=0, x[101];

void ktao(){
    for(int i=1; i<=n; i++){
        x[i] = 0;
    }
}

void in(){
    for(int i=1; i<=n; i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
}

void sinh(){
    int i=n;
    while(i!=0 && x[i] == 1){
        x[i] = 0;
        i--;
    }
    if(i == 0) ok=1;
    else x[i] = 1;
}

int tn(int x[], int n){
    int l=1, r=n;
    while(l<=r){
        if(x[l] != x[r]) return 0;
        l++; r--;
    }
    return 1;
}

int main(){
    cin>>n;
    ktao();
    while(!ok){
        if(tn(x, n)) in();
        sinh();
    }
    return 0;
}