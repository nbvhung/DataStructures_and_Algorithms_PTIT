#include<bits/stdc++.h>
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
    else{
        root->right = new node(y);
    }
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

int res = -1e9;

int findMax(node *root){
    if(!root) return 0;
    int l = findMax(root->left), r = findMax(root->right);
    if(!root->left && !root->right) return root->data;
    if(!root->left){
        return r + root->data;
    }
    if(!root->right){
        return l + root->data;
    }
    res = max(res, l + r + root->data);
    return max(l, r) + root->data;
}

void solve(){
    res = -1e9;
    node *root = NULL;
    int n; cin>>n;
    for(int i=1; i<=n; i++){
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
    findMax(root);
    cout<<res;
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