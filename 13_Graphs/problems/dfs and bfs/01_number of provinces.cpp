#include <bits/stdc++.h>
using namespace std;
/*
547. Number of Provinces

There are n cities. Some of them are connected, while some are not. If city a is connected directly with city b, and city b is connected directly with city c, then city a is connected indirectly with city c.

A province is a group of directly or indirectly connected cities and no other cities outside of the group.

You are given an n x n matrix isConnected where isConnected[i][j] = 1 if the ith city and the jth city are directly connected, and isConnected[i][j] = 0 otherwise.

Return the total number of provinces.
*/

    void dfs(int startNode, vector<vector<int>>& isConnected,vector<int>& visited){
        if (visited[startNode]==1) return;
        visited[startNode]=1;
        for (int i = 0; i < isConnected.size(); i++) {
            if (isConnected[startNode][i] == 1 && visited[i] == 0) {
                dfs(i, isConnected, visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector <int> visited(n,0);
        int province=0;
        for(int i=0;i<n;i++){
            int startNode=i;
            if(visited[startNode]==0){
                province++;
                dfs(startNode,isConnected,visited);
            }
        }
        return province;
    }