#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void findSubsets(int index,vector<int>& ds,vector<int>& nums,vector<vector<int>>& ans){
        //base case
        if(index>=nums.size()){
            return;
        }
        for(int i=index;i<nums.size();i++){
            //avoid repeating same element at same position, basically avoiding same combination
            if(i>index && nums[i]==nums[i-1]) continue;
            //picking an element
            ds.push_back(nums[i]);
            ans.push_back(ds);
            findSubsets(i+1,ds,nums,ans);
            //remove element on backtracking
            ds.pop_back();
        }


    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> ds;
        ans.push_back({});
        findSubsets(0,ds,nums,ans);
        return ans;
    }
};