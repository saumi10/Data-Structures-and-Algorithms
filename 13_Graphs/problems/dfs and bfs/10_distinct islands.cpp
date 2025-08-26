#include <bits/stdc++.h>
using namespace std;

void dfs(int i, int j, vector<vector<int>> &visited, vector<vector<int>> &grid, vector<pair<int, int>> &vec, pair<int, int> &base, set<vector<pair<int, int>>> &myset)
{

    int n = grid.size();
    int m = grid[0].size();
    visited[i][j] = 1;
    vec.push_back({i - base.first, j - base.second});
    int delRow[] = {-1, 0, 1, 0};
    int delCol[] = {0, 1, 0, -1};
    for (int k = 0; k < 4; k++)
    {
        int nRow = i + delRow[k];
        int nCol = j + delCol[k];
        if (nRow >= 0 && nRow < n && nCol >= 0 && nCol < m && !visited[nRow][nCol] && grid[nRow][nCol] == 1)
        {
            dfs(nRow, nCol, visited, grid, vec, base, myset);
        }
    }
}
int countDistinctIslands(vector<vector<int>> &grid)
{
    // code here
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> visited(n, vector<int>(m, 0));
    set<vector<pair<int, int>>> myset;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && grid[i][j] == 1)
            {
                pair<int, int> base = {i, j};
                vector<pair<int, int>> vec;
                dfs(i, j, visited, grid, vec, base, myset);
                myset.insert(vec);
            }
        }
    }
    return myset.size();
}