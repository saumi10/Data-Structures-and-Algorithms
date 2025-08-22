//Given an array of integers nums and an integer k, 
//return the total number of subarrays whose sum equals to k.

#include <bits/stdc++.h>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
        int preSum=0;
        int cnt=0;
        unordered_map<int , int> preSumMap;
        preSumMap[0]=1;
        for(int i=0;i<nums.size();i++){
            preSum+=nums[i];
            if(preSumMap.find(preSum-k)!=preSumMap.end()){
                cnt+=preSumMap[preSum-k];
                preSumMap[preSum]+=1;
            }
            else{
                preSumMap[preSum]+=1;
            }
        }
        return cnt;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int ans=subarraySum(nums,k);
    cout<<ans<<endl;
}