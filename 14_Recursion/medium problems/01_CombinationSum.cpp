//pick dont pick pattern
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void findCombination(int index,int target,vector<int>& candidates,vector<int>& ds,vector<vector<int>>& ans){
        if(index==candidates.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        //pick up the element
        if(candidates[index]<=target){
            ds.push_back(candidates[index]);
            findCombination(index,target-candidates[index],candidates,ds,ans);
            ds.pop_back();
        }
        //did not pick the element,move to next index
        findCombination(index+1,target,candidates,ds,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>ds;
        findCombination(0,target,candidates,ds,ans);
        return ans;
    }
};