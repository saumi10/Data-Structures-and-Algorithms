#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void f(int index,int k,int n,vector<int>& ds, vector<vector<int>>& ans){
        //base case
        if(k==0 && n==0){
            ans.push_back(ds);
            return;
        }

        for(int i=index;i<=9;i++){
            ds.push_back(i);
            f(i+1,k-1,n-i,ds,ans);
            ds.pop_back();   
        }



    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int>ds;
        int index=1;
        vector<int>mpp;
        f(index,k,n,ds,ans);
        return ans;
    }
};