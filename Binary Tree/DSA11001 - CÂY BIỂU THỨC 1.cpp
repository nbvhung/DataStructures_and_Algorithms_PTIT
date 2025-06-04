#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct node{
    char data;
    node *left, *right;

    node(char x){
        data = x;
        left = right = NULL;
    }
};

void inOrder(node *root){
    if(!root) return;
    inOrder(root->left);
    cout<<root->data;
    inOrder(root->right);
}

void solve(){
    string s; cin>>s;
    stack<node *> st;
    for(char c : s){
        if(isalpha(c)){
            node *tmp = new node(c);
            st.push(tmp);
        }
        else{
            node *mid = new node(c);
            node *x = st.top(); st.pop();
            node *y = st.top(); st.pop();
            mid->left = y;
            mid->right = x;
            st.push(mid);
        }
    }
    node *root = st.top();
    inOrder(root);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
        cout<<'\n';
    }
    return 0;
}