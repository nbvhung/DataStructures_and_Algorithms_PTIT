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

void insert(node *&root, int a[], int l, int r){
    if(l>r) return;
    int m = (l + r) / 2;
    root = new node(a[m]);
    insert(root->left, a, l, m-1);
    insert(root->right, a, m+1, r);
}

void postOrder(node *root){
    if(!root) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void solve(){
    node *root = NULL;
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    insert(root, a, 0, n-1);
    postOrder(root);
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
        cout<<endl;
	}
}

