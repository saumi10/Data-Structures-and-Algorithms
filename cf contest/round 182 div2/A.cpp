#include <bits/stdc++.h>
using namespace std;
pair<int,int> solve(vector<int>& arr,int n ){
    vector<int> prefix(n+1,0);
    for (int i=0;i<n;i++){
        prefix[i+1]=prefix[i]+arr[i];
    }

    for (int l=1;l<n;l++){
        for (int r=l+1;r<n; r++){
            int s1=(prefix[l])%3;
            int s2=(prefix[r]-prefix[l])%3;
            int s3=(prefix[n]-prefix[r])%3;

            if ((s1==s2 && s2==s3) || (s1!=s2 && s1!=s3 && s2!=s3)){
                return {l, r};
            }
        }
    }
    return {0, 0};


    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(auto &it : arr) cin>>it;
        pair<int,int> ans=solve(arr,n);
        cout<<ans.first<<" "<<ans.second<<endl;
    }
}