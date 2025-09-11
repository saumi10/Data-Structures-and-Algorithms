#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void f(int n,int open,string& s,vector<string>& ans){
        //base case
        if(n==0){
            for(int i=0;i<open;i++){
                s.push_back(')');
            }
            ans.push_back(s);
            for(int i=0;i<open;i++){
                s.pop_back();
            }
            return;
        }
        if(open>=0){
            s.push_back('(');
            f(n-1,open+1,s,ans);
        }
        s.pop_back();
        if(open>0){
            s.push_back(')');
            f(n,open-1,s,ans);
            s.pop_back();
        }
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s;
        int open=0;
        f(n,open,s,ans);
        return ans;
    }
};