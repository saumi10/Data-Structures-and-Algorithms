#include <bits/stdc++.h>
using namespace std;
//https://www.geeksforgeeks.org/problems/flood-fill-algorithm1856/1
void bfs(int sr, int sc, int color,int initialColor,vector<vector<int>>& result,vector<vector<bool>>& visited){
        int m=result.size();
        int n=result[0].size();
        result[sr][sc]=color;
        visited[sr][sc]=true;
        queue<pair<int,int>> q;
        q.push({sr,sc});
        while(!q.empty()){
            int startRow=q.front().first;
            int startCol=q.front().second;
            q.pop();
            //queue mai vhi push hoga jo adjacent mai visited ni hai as well as matches inital pixel value
            for(int i=startRow-1;i<=startRow+1;i++){
                for(int j=startCol-1;j<=startCol+1;j++){
                    if(i>=0 && i<m && j>=0 && j<n && (startRow==i || startCol==j)){
                        if(!visited[i][j] && result[i][j]==initialColor ){
                            q.push({i,j});
                            visited[i][j]=true;
                            result[i][j]=color;
                        }
                    
                    }
                }
            }

        }

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc] == color) return image;
        int m=image.size();
        int n=image[0].size();
        vector<vector<int>>result=image;
        vector<vector<bool>> visited(m,vector<bool>(n,0));
        int initialColor= image[sr][sc];
        bfs(sr,sc,color,initialColor,result,visited);
        return result;
    }