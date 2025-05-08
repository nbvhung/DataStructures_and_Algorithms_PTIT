#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    int a[n+1], d[n+1];
    for(int i=0; i<n; i++) cin>>a[i];
    stack<int> st;
    for(int i=0; i<n; i++){
        while(!st.empty() && a[i] > a[st.top()]){
            d[st.top()] = a[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        d[st.top()] = -1;
        st.pop();
    }
    for(int i=0; i<n; i++) cout<<d[i]<<" ";
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
        cout << endl;
    }
}
