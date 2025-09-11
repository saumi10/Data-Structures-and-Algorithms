#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &it : arr) cin>>it; //shorter way of taking vector inputs, O(N) 

    //declare and fill prefix vector O(N)
    vector<int> prefix(n);
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }

    //for q queries or test cases, we need to print prefix sum from l to r
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<prefix[r]-((l==0) ? 0 : prefix[l-1])<<endl;
    }//O(Q)
}
int main(){
    solve();
}
//TC = O(N+N+Q) = O(N+Q)
//SC = O(N) taken by Prefix vector