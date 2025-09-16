#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));//input vector
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    vector<vector<int>>pre(n,vector<int>(m)); //making prefix vector
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            pre[i][j]=v[i][j];
            if(j>0){
                pre[i][j]+=pre[i][j-1];
            }
            if(i>0){
                pre[i][j]+=pre[i-1][j];
            }
            if(i>0 && j>0){
                pre[i][j]-=pre[i-1][j-1];
            }
            // pre[i][j]=pre[i][j-1]+pre[i-1][j]-pre[i-1][j-1]+v[i][j];
        }
    }//n^2
    int q;
    cin>>q;
    while(q--){
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        int ans=pre[l2][r2];
        if(l1>0){
            ans-=pre[l1-1][r2];
        }
        if(r1>0){
            ans-=pre[l2][r1-1];
        }
        if(l1>0 && r1>0){
            ans+=pre[l1-1][r1-1];
        }
        cout<<ans<<" ";
        // ans=pre[l2][r2]-pre[l1-1][r2]-pre[l2][r1-1]+pre[l1-1][r1-1];
    }//q
    // T.C :- O(n^2+q)

}

int main(){
    solve();
}