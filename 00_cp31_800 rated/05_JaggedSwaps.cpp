#include <bits/stdc++.h>
using namespace std;
string solve(int n,vector<int>& arr){
    int mini=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<mini) return "NO";
    }
    return "YES";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(auto &it:arr)cin>>it;
        cout<<solve(n,arr)<<endl;
    }
}