#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(vector<vector<char>>& board,int row,int col,char c){
        //iterating using one for loop only, row,col and 3x3 grid
        for(int i=0;i<9;i++){
            //check col, if same number found anywhere, cant fill, hence invalid
            if(board[i][col]==c) return false;
            //check row, if same number found anywhere, cant fill, hence invalid
            if(board[row][i]==c) return false;
            //check 3x3 grid,, if same number found anywhere, cant fill, hence invalid
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c) return false;

        }
        return true;
    }
    bool solve(vector<vector<char>>& board){
        //traverse board matrix to find an empty cell
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='.'){//empty cell found, try to fill it
                    for(char c='1';c<='9';c++){
                        if(isValid(board,i,j,c)){
                            board[i][j]=c;
                            //call next recursion
                            if(solve(board)==true){//full board filled n returned true,so return true for all the previous recursion steps too
                                return true;
                            }
                            //recursion goes wrong n returns false, reset n backtrack
                            else{
                                board[i][j]='.';
                            }
                        }
                    }
                    //nothing from 1 to 9 valid means this recursion path is wrong hence return false
                    return false;

                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }

};