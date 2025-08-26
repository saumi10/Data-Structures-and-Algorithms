// https://www.geeksforgeeks.org/problems/alien-dictionary/1
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string findOrder(vector<string> &words) {
        int n = words.size();
        vector<vector<int>> adjList(26);
        vector<int> indegree(26, 0);
        vector<bool> present(26, false);

        // Mark which characters actually appear
        for (auto &w : words) {
            for (auto &ch : w) {
                present[ch - 'a'] = true;
            }
        }

        // Build graph from word pairs
        for (int i = 0; i < n - 1; i++) {
            string s1 = words[i], s2 = words[i+1];
            int len = min(s1.size(), s2.size());
            bool found = false;
            for (int j = 0; j < len; j++) {
                if (s1[j] != s2[j]) {
                    int u = s1[j] - 'a';
                    int v = s2[j] - 'a';
                    adjList[u].push_back(v);
                    indegree[v]++;
                    found = true;
                    break; // only first differing char matters
                }
            }
            // Invalid case: prefix longer than next word
            if (!found && s1.size() > s2.size()) return "";
        }

        // Topological sort (Kahn’s algorithm)
        queue<int> q;
        string ans = "";
        for (int i = 0; i < 26; i++) {
            if (present[i] && indegree[i] == 0) {
                q.push(i);
            }
        }

        while (!q.empty()) {
            int node = q.front(); q.pop();
            ans += char(node + 'a');
            for (int v : adjList[node]) {
                indegree[v]--;
                if (indegree[v] == 0) q.push(v);
            }
        }

        // Check if we used all unique characters
        int totalChars = count(present.begin(), present.end(), true);
        if ((int)ans.size() != totalChars) return "";

        return ans;
    }
};
