//tuf platform problem

#include <bits/stdc++.h>
using namespace std;


    void dfs(int startNode,vector<int>adjList[],vector<int>& visited){
      visited[startNode]=1;
      for(auto &it : adjList[startNode]){
        if(visited[it]==0){
          dfs(it,adjList,visited);
        }
      }
    }
    int findNumberOfComponent(int V, vector<vector<int>> &edges) {
      vector<int>adjList[V];
      for(auto it:edges){
        adjList[it[0]].push_back(it[1]);
        adjList[it[1]].push_back(it[0]);
      }

      vector<int>visited(V,0);
      int count=0;
      for(int i=0;i<V;i++){
        if(visited[i]==0){
          count++;
          dfs(i,adjList,visited);
        }

      }
      return count;
      
    }