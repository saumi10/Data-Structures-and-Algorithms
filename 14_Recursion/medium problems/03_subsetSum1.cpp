//pick/dont pick pattern
//https://www.geeksforgeeks.org/problems/subset-sums2234/1
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void findSum(int index,int sum,vector<int>& arr,vector<int>& ans){
        //base case
        if(index>=arr.size()){
            ans.push_back(sum);
            return;
        }
        //element picked
        findSum(index+1,sum+arr[index],arr,ans);
        //element not picked
        findSum(index+1,sum,arr,ans);
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int>ans;
        int sum=0;
        findSum(0,sum,arr,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};