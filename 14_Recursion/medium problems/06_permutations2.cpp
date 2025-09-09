#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void recurPermute(int index,vector<int>& nums,vector<vector<int>>& ans){
        //base case
        if(index==nums.size()){
            ans.push_back(nums);
            return;
        }
        //loop index to n-1
        for(int i=index;i<nums.size();i++){
            //swap
            swap(nums[index],nums[i]);
            recurPermute(index+1,nums,ans);
            //backtracking, swap back
            swap(nums[index],nums[i]);//so that nums goes back to original nums
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        recurPermute(0,nums,ans);
        return ans;
    }
};