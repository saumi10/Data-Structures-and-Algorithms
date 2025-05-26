#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& arr, int n){
    int count=0;
    for(int i=0;i<n;i++){
        int j=i;
        while(j+1<n){
           if(1>=arr[j+1]-arr[i]){
                j++;
           }
           else{
            break;
           }
            
        }
        count++;
        i=j;
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=solve(arr,n);
        cout<<ans<<endl;
    }
}