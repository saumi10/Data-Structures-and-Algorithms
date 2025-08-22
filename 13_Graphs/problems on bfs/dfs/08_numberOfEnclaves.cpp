#include <bits/stdc++.h>
using namespace std;

void dfs(int i, int j,vector<vector<int>>& grid,vector<vector<int>>& visited){
        int m=grid.size();
        int n=grid[0].size();
        visited[i][j]=1;
        int delRow[]={-1,0,1,0};
        int delCol[]={0,1,0,-1};
        
        for(int k=0;k<4;k++){
            int nRow=i+delRow[k];
            int nCol=j+delCol[k];
            if(nRow>=0 && nRow<m && nCol>=0 && nCol<n && !visited[nRow][nCol] && grid[nRow][nCol]==1){
                dfs(nRow,nCol,grid,visited);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>visited(m,vector<int>(n,0));
        //traverse first and last row
        for(int j=0;j<n;j++){
            if(!visited[0][j] && grid[0][j]==1){
                dfs(0,j,grid,visited);
            }
            if(!visited[m-1][j] && grid[m-1][j]==1){
                dfs(m-1,j,grid,visited);
            }
        }
        //traverse first and last col
        for(int j=0;j<m;j++){
            if(!visited[j][0] && grid[j][0]==1){
                dfs(j,0,grid,visited);
            }
            if(!visited[j][n-1] && grid[j][n-1]==1){
                dfs(j,n-1,grid,visited);
            }
        }
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!visited[i][j] && grid[i][j]==1){
                    count++;
                }
            }
        }
        return count;
    }