#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string max_val(int n, int s){
    string ans = string(n, '0');
    for(int i=0; i<n; i++){
        if(s >= 9){
            ans[i] = '9';
            s -= 9;
        }
        else{
            ans[i] = s + '0';
            return ans;
        }
    }
    return ans;
}

string min_val(int n, int s){
    string ans = string(n, '0');
    for(int i=n-1; i>=0; i--){
        if(s > 9){
            ans[i] = '9';
            s -= 9;
        }
        else{
            if(i == 0){
                ans[i] = s + '0';
            }
            else{
                ans[0] = '1';
                ans[i] = (s - 1) + '0';
            }
            return ans;
        }
    }
    return ans;
}

void solve(){
    int n, s; cin>>n>>s;
    if((9*n < s) || (s==0 && n>1)){
        cout<<"-1 -1"; return;
    }
    cout<<min_val(n,s)<<" "<<max_val(n,s);
}

int main() {
    int t=1;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}