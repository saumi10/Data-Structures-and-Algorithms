#include <bits/stdc++.h>
using namespace std;
class Solution {
  private:
    bool dfs(int i,vector<vector<int>>& adj,vector<int>& vis, vector<int>& pathVis){
        vis[i]=1;
        pathVis[i]=1;
        for(auto it : adj[i]){
            if(!vis[it]){
                if(dfs(it,adj,vis,pathVis)==true){
                    return true;
                }
            }
            else if(vis[it]==1 && pathVis[it]==1){
                return true;
            }
               
          
        }
        pathVis[i]=0;
        return false;
        
        
        
    }  
  public:
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<vector<int>>adj(V);
        for (auto &e : edges) {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
            
        }
        vector<int>vis(V,0);
        vector<int>pathVis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(dfs(i,adj,vis,pathVis)==true){
                    return true;
                }
            }
        }
        return false;
    }
};