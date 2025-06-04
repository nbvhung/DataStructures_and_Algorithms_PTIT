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

void insert(node *&root, int a[], int l, int r){
    if(l > r) return;
    int m = (l + r) / 2;
    root = new node(a[m]);
    insert(root->left, a, l, m-1);
    insert(root->right, a, m+1, r);
}

int cnt = 0;

void dfs(node *root){
    if(!root) return;
    if(!root->left && !root->right){
        cnt++;
        return;
    }
    dfs(root->left);
    dfs(root->right);
}

void solve(){
    cnt = 0;
    node *root = NULL;
    int n; cin>>n;
    int a[1001];
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    insert(root, a, 0, n-1);
    dfs(root);
    cout<<cnt;
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