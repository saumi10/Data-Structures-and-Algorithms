#include <bits/stdc++.h>
using namespace std;
//https://www.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1

class Solution {
  public:
     void recurPermute(int index, string& s, vector<string>& ans,vector<int>& freq,string& ds) {
         //base case
        if(ds.size()==s.size()){
            ans.push_back(ds);
            return;
        }
        //loop
        for(int i=0;i<s.size();i++){
            if (freq[i]) continue; // already used
            
            // skip duplicates: only take nums[i] if the previous duplicate was already used
            if (i > 0 && s[i] == s[i-1] && !freq[i-1]) continue;
            
                //store in ds,update freq
                ds.push_back(s[i]);
                freq[i]=1;
                recurPermute(index+1,s,ans,freq,ds);
                //backtrack
                ds.pop_back();
                freq[i]=0;
            
            
        }
     }
    vector<string> findPermutation(string &s) {
        // Code here there
        sort(s.begin(),s.end());
        vector<string>ans;
        string ds;
        vector<int>freq(s.size(),0);
        recurPermute(0,s,ans,freq,ds);
        return ans;
    }
};
