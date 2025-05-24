#include<bits/stdc++.h>
using namespace std;

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
    if(root == NULL) return;
    if(root->data == x){
        makeNode(root, x, y, c);
    }
    else{
        insertNode(root->left, x, y, c);
        insertNode(root->right, x, y, c);
    }
}

bool ok=true;

void dfs(node *root){
    if(root == NULL) return;
    if(root->left && root->right){
        dfs(root->left);
        dfs(root->right);
        return;
    }
    if(!root->left && !root->right) return;
    ok = false;
}

void solve(){
    ok = true;
    node *root = NULL;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x, y; char c;
        cin>>x>>y>>c;

        if(root == NULL){
            root = new node(x);
            makeNode(root, x, y, c);
        }
        else{
            insertNode(root, x, y, c);
        }
    }
    dfs(root);
    cout<<(ok ? 1 : 0);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}