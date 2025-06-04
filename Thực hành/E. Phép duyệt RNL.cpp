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

void buildTree(node *&root, vector<string> &v){
    if(v.empty() || v[0] == "N") return;
    queue<node *> q;
    root = new node(stoi(v[0]));
    q.push(root);
    int i=1;
    while(!q.empty()){
        node *tmp = q.front(); q.pop();
        if(i<v.size() && v[i] != "N"){
            tmp->left = new node(stoi(v[i]));
            q.push(tmp->left);
        }
        i++;
        if(i<v.size() && v[i] != "N"){
            tmp->right = new node(stoi(v[i]));
            q.push(tmp->right);
        }  
        i++;
    }
}

void RNL(node *root){
    if(!root) return;
    RNL(root->right);
    cout<<root->data<<" ";
    RNL(root->left);
}

void solve(){
    node *root = NULL;
    string s; getline(cin, s);
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    buildTree(root, v);
    RNL(root);
}   

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    cin.ignore();
    while(t--){
        solve();
        cout<<'\n';
    }
    return 0;
}
