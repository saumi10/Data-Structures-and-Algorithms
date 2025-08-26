//https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
#include <bits/stdc++.h>
using namespace std;
class Solution {
    private:
    bool detectCycle(int i,vector<int>& visited,vector<vector<int>>& adjList){
        visited[i]=1;
        queue<pair<int,int>>q;
        q.push({i,-1});
        while(!q.empty()){
            int startNode=q.front().first;
            int parentNode=q.front().second;
            q.pop();
            for(auto j: adjList[startNode]){
                if(!visited[j]){
                    visited[j]=1;
                    q.push({j,startNode});
                }
                else if(j!=parentNode){
                    return true;
                }
            }
            
        }
        return false;
    }
  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        
        //creating adjList
        vector<vector<int>>adjList(V);
        for(int i=0;i<edges.size();i++){
            adjList[edges[i][0]].push_back(edges[i][1]);
            adjList[edges[i][1]].push_back(edges[i][0]);
        }
        
        vector<int>visited(V,0);
        
        for(int i=0;i<V;i++){
            if(!visited[i]){
                if(detectCycle(i,visited,adjList)==true){
                    return true;
                }
            }
        }
        return false;
        
        
    }
};