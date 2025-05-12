// https://www.geeksforgeeks.org/problems/shortest-job-first/1

#include <bits/stdc++.h>
using namespace std;

long long solve(vector<int> &bt)
{
    // code here
    sort(bt.begin(), bt.end());
    long long t = 0;
    long long wt = 0;
    for (int i = 0; i < bt.size(); i++)
    {
        wt += t;
        t += bt[i];
    }
    return wt / bt.size();
}