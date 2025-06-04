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

int height = 0;

void dfs(node *root, int h){
    if(!root) return;
    if(!root->left && !root->right){
        height = max(height, h);
        return;
    }
    dfs(root->left, h+1);
    dfs(root->right, h+1);
}

void solve(){
    height = 0;
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
    dfs(root, 0);
    cout<<height;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
        cout<<endl;
	}
}

