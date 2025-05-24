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
    if(root == NULL){
        return;
    }
    if(root->data == x){
        makeNode(root, x, y, c);
    }
    else{
        insertNode(root->left, x, y, c);
        insertNode(root->right, x, y, c);
    }
}

bool check(node *root1, node *root2){
    if(root1 == NULL && root2 == NULL) return true;
    if(root1 == NULL || root2 == NULL) return false;
    if(root1->data != root2->data) return false;
    return check(root1->left, root2->left) && check(root1->right, root2->right);
}

void nhap(node *&root){
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
}

void solve(){
    node *root1 = NULL, *root2 = NULL;
    nhap(root1); nhap(root2);
    if(check(root1, root2)) cout<<1;
    else cout<<0;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}