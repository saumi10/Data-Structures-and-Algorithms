// kahn's algo, using indegree array instead of visited array , bfs + queue
#include <bits/stdc++.h>
using namespace std;

vector<int> topoSort(int V, vector<vector<int>> &edges)
{
    // build adj list
    vector<int> adj[V];
    for (auto &e : edges)
    {
        int u = e[0], v = e[1];
        adj[u].push_back(v);
    }

    // filling up indegree array
    int indegree[V] = {0};
    for (int i = 0; i < V; i++)
    {
        for (auto it : adj[i])
        {
            indegree[it]++;
        }
    }
    // filling queue initially with node having indegree=0
    queue<int> q;
    for (int i = 0; i < V; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }
    // ans vector filling while q empties using bfs
    vector<int> ans;
    while (!q.empty())
    {
        int node = q.front();
        ans.push_back(node);
        q.pop();
        // node is in your ans
        // so removed it from queue
        // now bfs
        // adjacent nodes' indegree reduction
        for (auto it : adj[node])
        {
            indegree[it]--;
            if (indegree[it] == 0)
                q.push(it);
        }
    }
    return ans;
}