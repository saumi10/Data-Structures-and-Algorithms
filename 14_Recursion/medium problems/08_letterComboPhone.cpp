#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void combine(int index,string digits,string temp,vector<string>& ans, unordered_map<char,string>& mpp){
        //base case
        if(index>=digits.size()){
            ans.push_back(temp);
            return;
        }
        //loop
        for(int i=0;i<mpp[digits[index]].size();i++){
            temp.push_back(mpp[digits[index]][i]);
            combine(index+1,digits,temp,ans,mpp);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits=="") return {};
        vector<string> ans;
        string temp="";
        unordered_map<char,string>mpp;
        mpp['2']="abc";
        mpp['3']="def";
        mpp['4']="ghi";
        mpp['5']="jkl";
        mpp['6']="mno";
        mpp['7']="pqrs";
        mpp['8']="tuv";
        mpp['9']="wxyz";

        combine(0,digits,temp,ans,mpp);
        return ans;
    }
};