//pick/dont pick pattern
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void findCombination(int index,int target,vector<int>& candidates,vector<int>& ds,vector<vector<int>>& ans){
        //base case
        if(target==0){
            ans.push_back(ds);
            return;
        }
        //loop to check which element can we pick
        for(int i=index;i<candidates.size();i++){
            //avoid picking same element twice for same position otherwise same combination you will get again
            if(i>index && candidates[i]==candidates[i-1]) continue;
            //if element not same as before for current position,but exceeds target,and since array is sorted, we cant get a combination now
            if(candidates[i]>target){
                break;
            }
            //picking element
            ds.push_back(candidates[i]);
            findCombination(i+1,target-candidates[i],candidates,ds,ans);
            ds.pop_back();//backtracking
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        findCombination(0,target,candidates,ds,ans);
        return ans;
    }
};