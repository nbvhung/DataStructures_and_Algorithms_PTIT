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

bool ok = true;
int height = 0;

void dfs(node *root, int h){
    if(root == NULL) return;
    if(root->left && root->right){
        dfs(root->left, h+1);
        dfs(root->right, h+1);
        return;
    }
    if(!root->left && !root->right){
        if(height == 0){
            height = h;
        }
        else{
            if(height != h){
                ok = false;
            }
        }
        return;
    }
    ok = false;
}

void solve(){
    ok = true;
    height = 0;
    node *root = NULL;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x, y; char c; 
        cin>>x>>y>>c;
        if(!root){
            root = new node(x);
            makeNode(root, x, y, c);
        }
        else{
            insertNode(root, x, y, c);
        }
    }
    dfs(root, 0);
    cout<<(ok ? "Yes" : "No");
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}