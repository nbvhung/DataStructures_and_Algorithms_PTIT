#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n+1];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        vector<int> v;
        for(int i=0; i<n; i++){
            auto it = upper_bound(v.begin(), v.end(), a[i]);
            if(it == v.end()){
                v.push_back(a[i]);
            }
            else{
                *it = a[i];
            }
        }
        cout<<n-v.size()<<endl;
    }
}
        