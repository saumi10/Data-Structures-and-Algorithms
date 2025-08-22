// https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1

#include <bits/stdc++.h>
using namespace std;

class Solution {
  private:
    void bfs(int row, int col,vector<vector<int>>& visited,vector<vector<char>>& grid){
         int n=grid.size();
        int m=grid[0].size();
        
        visited[row][col]=1;
        queue<pair<int,int>> q;
        q.push({row,col});
        while(!q.empty()){
            int startRow=q.front().first;
            int startCol=q.front().second;
            q.pop();
            
            for(int neighRow=startRow-1;neighRow<=startRow+1;neighRow++){
                
                for(int neighCol=startCol-1;neighCol<=startCol+1;neighCol++){
                    
                    if (neighRow >= 0 && neighRow < n && neighCol >= 0 && neighCol < m){
                        if(!visited[neighRow][neighCol] && grid[neighRow][neighCol]=='L'){
                            visited[neighRow][neighCol]=1;
                            q.push({neighRow,neighCol});
                        }
                    }
                    
                }
            }
            
        }
    }
  public:
    int countIslands(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        
        vector<vector<int>> visited(n,vector<int>(m,0));
        
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(visited[row][col]==0 && grid[row][col]=='L'){
                    count++;
                    bfs(row,col,visited,grid);
                }
            }
        }
        return count;
        
    }
};