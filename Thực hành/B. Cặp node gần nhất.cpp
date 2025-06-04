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

int findMax(node *root, int x){
    int res = 0;
    while(root){
        if(x < root->data){
            res = root->data;
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return res;
}

int findMin(node *root, int x){
    int res = 0;
    while(root){
        if(x > root->data){
            res = root->data;
            root = root->right;
        }
        else{
            root = root->left;
        }
    }
    return res;
}

void solve(){
    node *root = NULL;
    int n, q; cin>>n>>q;
    for(int i=1; i<=n; i++){
        int x; cin>>x;
        if(!root){
            root = new node(x);
        }
        else{
            insert(root, x);
        }
    }
    while(q--){
        int x; cin>>x;
        cout<<findMin(root, x)<<" "<<findMax(root, x)<<endl;
    }
}   

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t=1;
    while(t--){
        solve();
        cout<<'\n';
    }
    return 0;
}
