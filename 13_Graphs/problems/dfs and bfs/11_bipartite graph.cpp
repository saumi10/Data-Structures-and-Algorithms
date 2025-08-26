#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  bool bfs(int i,vector<vector<int>>& adj,vector<int>& coloured){
        queue<int>q;
        q.push(i);
        coloured[i]=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it : adj[node]){
                if(coloured[it]==-1){
                    q.push(it);
                    coloured[it] = 1 - coloured[node];
                }
                else{
                    if(coloured[it]==coloured[node]){
                        return false;
                    }
                }
            }
        }
        return true;

    }
    bool isBipartite(int V, vector<vector<int>> &graph) {
        // Code here
         //adj list is not given here,build it
         // Step 1: Build adjacency list
        vector<vector<int>> adj(V);
        for (auto &e : graph) {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int>coloured(V,-1);
        for(int i=0;i<V;i++){
            if(coloured[i]==-1){
                bool bipartite=bfs(i,adj,coloured);
                if(bipartite==false){
                    return false;
                }
            }
        }
        
        return true;
        
    }
};