#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& arr, int n,int s){
    int start=arr[0];
    int end=arr[n-1];
    int x=0;
    if(n==1){
        return abs(s-start);
    }
    if(s>=end){
        return s-start;
    }
    else if(s<=start){
        return end-s;
    }
    else{
        int miniPath=min(s-start,end-s);
        if((s-start)<=(end-s)){
            x=end-s;
        }
        else{
            x=s-start;
        }
        return (2*miniPath)+(x);
    }
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=solve(arr,n,s);
        cout<<ans<<endl;
    }
}