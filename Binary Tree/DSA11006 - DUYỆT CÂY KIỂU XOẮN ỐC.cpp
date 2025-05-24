#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct node{
    int data;
    node *left, *right;

    node(int x){
        data = x;
        left = right = NULL;
    }
};

void makeNode(node *root, int x, int y, char c){
    if(c == 'L'){
        root->left = new node(y);
    }
    else root->right = new node(y);
}

void insertNode(node *root, int x, int y, char c){
    if(!root) return;
    if(root->data == x){
        makeNode(root, x, y, c);
    }
    else{
        insertNode(root->left, x, y, c);
        insertNode(root->right, x, y, c);
    }
}

void xoanoc(node *root){
    stack<node*> st1, st2;
    st1.push(root);
    while(!st1.empty() || !st2.empty()){
        while(!st1.empty()){
            auto it = st1.top(); st1.pop();
            cout<<it->data<<" ";
            if(it->right){
                st2.push(it->right);
            }
            if(it->left){
                st2.push(it->left);
            }
        }
        while(!st2.empty()){
            auto it = st2.top(); st2.pop();
            cout<<it->data<<" ";
            if(it->left){
                st1.push(it->left);
            }
            if(it->right){
                st1.push(it->right);
            }
        }
    }
}

void solve(){
    node *root = NULL;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x, y; char c; cin>>x>>y>>c;
        if(!root){
            root = new node(x);
            makeNode(root, x, y, c);
        }
        else{
            insertNode(root, x, y, c);
        }
    }
    xoanoc(root);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--) {
        solve();
        cout<<endl;
    }
    return 0;
}
