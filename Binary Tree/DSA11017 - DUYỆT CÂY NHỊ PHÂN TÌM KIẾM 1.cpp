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

void insert(node *root, int key){
    if(!root) return;
    if(key < root->data){
        if(root->left) insert(root->left, key);
        else root->left = new node(key);
    }
    else{
        if(root->right) insert(root->right, key);
        else root->right = new node(key);
    }
}

void postOrder(node *root){
    if(!root) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void solve() {
    node *root = NULL;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        if(!root){
            root = new node(x);
        }
        else{
            insert(root, x);
        }
    }
    postOrder(root);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
        cout<<endl;
    }
    return 0;
}