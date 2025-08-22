//https://www.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1

#include <bits/stdc++.h>
using namespace std;

 
 static bool comp(pair<int , int>p1 , pair<int , int> p2){
        if(p1.second>p2.second){
            return true;
        }
        if(p2.second>p1.second){
            return false;
        }
        if(p1.first<p2.first){
            return true;
        }
        return false;
    }
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        // code here
        unordered_map<int,int>mpp;
        
        vector<pair<int,int>>vec;
        for(int i=0;i<profit.size();i++){
            vec.push_back({deadline[i],profit[i]});
        }
        sort(vec.begin(),vec.end(),comp);
        
        int maxDeadline = *max_element(deadline.begin(), deadline.end());
        
        for(int i=0;i<maxDeadline;i++){
            mpp[i]={-1};
        }
        int cnt=0;
        int cntProfit=0;
        for(auto it:vec){
            for(int i=it.first-1;i>=0;i--){
                if(mpp[i]==-1){
                    cnt++;
                    cntProfit+=it.second;
                    mpp[i]=1;
                    break;
                }
            }
        }
        return {cnt,cntProfit};
        
        
    }