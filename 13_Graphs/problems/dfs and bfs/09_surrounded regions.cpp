#include <bits/stdc++.h>
using namespace std;
    void dfs(int i, int j,vector<vector<char>>& board,vector<vector<int>>& visited){
        int m=board.size();
        int n=board[0].size();
        visited[i][j]=1;
        int delRow[]={-1,0,1,0};
        int delCol[]={0,1,0,-1};
        
        for(int k=0;k<4;k++){
            int nRow=i+delRow[k];
            int nCol=j+delCol[k];
            if(nRow>=0 && nRow<m && nCol>=0 && nCol<n && !visited[nRow][nCol] && board[nRow][nCol]=='O'){
                dfs(nRow,nCol,board,visited);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>>visited(m,vector<int>(n,0));
        //traverse first and last row
        for(int j=0;j<n;j++){
            if(!visited[0][j] && board[0][j]=='O'){
                dfs(0,j,board,visited);
            }
            if(!visited[m-1][j] && board[m-1][j]=='O'){
                dfs(m-1,j,board,visited);
            }
        }
        //traverse first and last col
        for(int j=0;j<m;j++){
            if(!visited[j][0] && board[j][0]=='O'){
                dfs(j,0,board,visited);
            }
            if(!visited[j][n-1] && board[j][n-1]=='O'){
                dfs(j,n-1,board,visited);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!visited[i][j] && board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
        

    }