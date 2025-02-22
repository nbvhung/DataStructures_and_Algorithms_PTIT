#include<bits/stdc++.h>
using namespace std;

int n, k, a[1001], x[1001], cnt=0;
vector<vector<int>>res;

void nhap(){
    cin>>n>>k;
    for(int i=1; i<=n; i++) cin>>a[i];
    sort(a+1, a+n+1);
}

void Try(int i, int sum, int pos){
    for(int j=pos; j<=n; j++){
        x[i] = a[j];
        if(sum + a[j] == k){ 
            vector<int>v(x+1, x+i+1);
            res.push_back(v);
        }
        else if(sum + a[j] < k){
            Try(i+1, sum + a[j], j+1);
        }
    }
}

int main(){
    nhap();
    Try(1,0,1);
    sort(res.rbegin(), res.rend());
    for(auto it : res){
        for(int x : it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    cout<<res.size();
}