#include <bits/stdc++.h>
using namespace std;

void bfs(queue<pair<pair<int, int>, int>> &q, vector<vector<int>> &mat, vector<vector<int>> &visited, vector<vector<int>> &distance)
{
    int m = mat.size();
    int n = mat[0].size();
    int delRow[] = {-1, 0, 1, 0};
    int delCol[] = {0, 1, 0, -1};
    while (!q.empty())
    {
        int row = q.front().first.first;
        int col = q.front().first.second;
        int dist = q.front().second;
        q.pop();
        distance[row][col] = dist;
        for (int i = 0; i < 4; i++)
        {
            int nRow = row + delRow[i];
            int nCol = col + delCol[i];
            if (nRow >= 0 && nRow < m && nCol >= 0 && nCol < n && visited[nRow][nCol] == 0)
            {
                q.push({{nRow, nCol}, dist + 1});
                visited[nRow][nCol] = 1;
            }
        }
    }
}
vector<vector<int>> updateMatrix(vector<vector<int>> &mat)
{
    int m = mat.size();
    int n = mat[0].size();
    vector<vector<int>> distance(m, vector<int>(n, 0));
    vector<vector<int>> visited(m, vector<int>(n, 0));
    queue<pair<pair<int, int>, int>> q;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 0)
            {
                q.push({{i, j}, 0});
                visited[i][j] = 1;
            }
        }
    }
    bfs(q, mat, visited, distance);
    return distance;
}