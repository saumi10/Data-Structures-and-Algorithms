#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>& arr, int n){
    vector<int>v(n+1,0);
    for(int i=0;i<n;i++){
        if(arr[i]==0) continue;
        v[arr[i]]=i+1;
    }
    int r=0;
    int l=0;
    for(int i=n;i>0;i--){
        if(v[i]!=i){
            r=i-1;
            break;
        }
    }
    for(int j=1;j<=n;j++){
        if(v[j]!=j){
            l=j-1;
            break;
        }
    }
    return r-l;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(auto &it : arr) cin>>it;
        int ans=solve(arr,n);
        cout<<ans<<endl;
    }
}