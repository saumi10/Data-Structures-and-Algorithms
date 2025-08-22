#include <bits/stdc++.h>
using namespace std;
int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<pair<int,int>, int>> q;
        vector<vector<int>> visited(m,vector<int>(n,0));
        int countFresh=0,countRotten=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    countFresh++;
                }
                else if(grid[i][j]==2){
                    countRotten++;
                    q.push({{i,j},0});
                }
            }
        }
        if(countFresh==0) return 0;
        if(countRotten==0) return -1;
        int delRow[]={-1,0,1,0};
        int delCol[]={0,1,0,-1};
        int minTime=0;
        while(!q.empty()){
            int startRow=q.front().first.first;
            int startCol=q.front().first.second;
            int time=q.front().second;
            visited[startRow][startCol]=1;
            q.pop();
            for(int i=0;i<4;i++){
                int nRow=startRow+delRow[i];
                int nCol=startCol+delCol[i];
                if(nRow>=0 && nRow<m && nCol>=0 && nCol<n && !visited[nRow][nCol] && grid[nRow][nCol]==1){
                    visited[nRow][nCol]=1;
                    q.push({{nRow,nCol},time+1});
                    countFresh--;
                }
            }
            minTime=time;
        }
        if(countFresh!=0) return -1;
        else return minTime;

     
    }