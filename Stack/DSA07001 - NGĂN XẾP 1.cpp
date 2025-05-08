#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    stack<int> st;
    while(cin>>s){
        if(s == "push"){
            int n; cin>>n;
            st.push(n);
        }
        else if(s == "pop"){
            st.pop();
        }
        else{
            if(st.empty()) cout<<"empty";
            else{
                stack<int> tmp;
                while(!st.empty()){
                    int x = st.top(); st.pop();
                    tmp.push(x);
                }
                while(!tmp.empty()){
                    int x = tmp.top(); tmp.pop();
                    cout<<x<<" ";
                    st.push(x);
                }
                cout<<endl;
            }
        }
    }
}

int main(){
    int t=1;
    while(t--){
        solve();
        cout<<endl;
    }
}