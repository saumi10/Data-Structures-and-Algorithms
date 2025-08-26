#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findOrder(int N, vector<vector<int>>& prerequisites) {
        //build adjList
        
        vector<vector<int>>adjList(N);
        for(auto p : prerequisites){
            int u=p[1];
            int v=p[0];
            adjList[u].push_back(v);
        }
        
        //fill indegree array
        vector<int> indegree(N, 0);
        for(int i=0;i<N;i++){
            for(auto it : adjList[i]){
                indegree[it]++;
            }
        }
        
        //push initial 0 indegree nodes in the queue
        queue<int>q;
        for(int i=0;i<N;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        int cnt=0;
        vector<int>ans;
        while(!q.empty()){
            int node=q.front();
            cnt++;
            ans.push_back(node);
            q.pop();
            for(auto it : adjList[node]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        if(cnt==N){
            return ans;
        }
        else{
            return {};
        }
        
    }
};