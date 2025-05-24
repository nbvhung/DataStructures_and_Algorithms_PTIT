#include <bits/stdc++.h>
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

void bfs(node *root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        auto it = q.front(); q.pop();
        cout<<it->data<<" ";
        if(it->left != NULL) q.push(it->left);
        if(it->right != NULL) q.push(it->right);
    }
}

void solve() {
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
    bfs(root);
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
