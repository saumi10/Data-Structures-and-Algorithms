#include <bits/stdc++.h>
using namespace std;

string solve(int n,int k, vector<int>& arr){
    if(k==1 && n==1){
        return "yes";
    } 
    if(k==1){
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]) return "no";
        }
        return "yes";
    }
    return "yes";



}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(auto &it : arr) cin>>it;

        cout<<solve(n,k,arr)<<endl;
    }    
    
}