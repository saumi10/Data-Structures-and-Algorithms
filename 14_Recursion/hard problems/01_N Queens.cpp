//https://leetcode.com/problems/n-queens/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(int col,vector<string>& board, vector<vector<string>>& ans,vector<int>leftRow,
        vector<int>& lowerDiagonal, vector<int>& upperDiagonal,int n){
            //base case
            if(col==n){
                ans.push_back(board);
                return;
            }
            //iterating and checking which row can be filled
            for(int row=0;row<n;row++){
                //check conditions
                if(leftRow[row]==0 && lowerDiagonal[row+col]==0 && upperDiagonal[n-1+col-row]==0){
                    // condn satisfied, can place queen here and mark vectors as visited
                    board[row][col]='Q';
                    leftRow[row]=1;
                    lowerDiagonal[row+col]=1;
                    upperDiagonal[n-1+col-row]=1;
                    //call recursion for next col'
                    solve(col+1,board,ans,leftRow,lowerDiagonal,upperDiagonal,n);
                    //rest on backtracking
                    board[row][col]='.';
                    leftRow[row]=0;
                    lowerDiagonal[row+col]=0;
                    upperDiagonal[n-1+col-row]=0;
                }
            }
        }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        vector<int>leftRow(n);
        vector<int>upperDiagonal(2*n-1,0);
        vector<int>lowerDiagonal(2*n-1,0);
        solve(0,board,ans,leftRow,lowerDiagonal,upperDiagonal,n);
        return ans;

    }
};


//https://www.geeksforgeeks.org/problems/n-queen-problem0315/1
//gfg solution
class Solution {
  public:
    void solve(int col, vector<vector<int>>& ans,vector<int>leftRow,
        vector<int>& lowerDiagonal, vector<int>& upperDiagonal,int n,vector<int>& config){
            //base case
            if(col==n){
                ans.push_back(config);
                return;
            }
            //iterating and checking which row can be filled
            for(int row=0;row<n;row++){
                //check conditions
                if(leftRow[row]==0 && lowerDiagonal[row+col]==0 && upperDiagonal[n-1+col-row]==0){
                    // condn satisfied, can place queen here and mark vectors as visited
                    
                    leftRow[row]=1;
                    lowerDiagonal[row+col]=1;
                    upperDiagonal[n-1+col-row]=1;
                    config.push_back(row+1);
                    //call recursion for next col'
                    solve(col+1,ans,leftRow,lowerDiagonal,upperDiagonal,n,config);
                    //reset on backtracking
                    
                    leftRow[row]=0;
                    lowerDiagonal[row+col]=0;
                    upperDiagonal[n-1+col-row]=0;
                    config.pop_back();
                }
            }
        }
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>> ans;
        vector<int> config;
        //visited arrays
        vector<int>leftRow(n);
        vector<int>upperDiagonal(2*n-1,0);
        vector<int>lowerDiagonal(2*n-1,0);
        solve(0,ans,leftRow,lowerDiagonal,upperDiagonal,n,config);
        return ans;
        
    }
};