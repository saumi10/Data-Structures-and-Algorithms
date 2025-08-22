#include <bits/stdc++.h>
using namespace std;

int daysReq(vector<int> &weights, int capacity)
{
    int days = 1, load = 0;
    int n = weights.size();
    for (int i = 0; i < n; i++)
    {
        if (load + weights[i] > capacity)
        {
            days++;
            load = weights[i];
        }
        else
        {
            load += weights[i];
        }
    }
    return days;
}
int shipWithinDays(vector<int> &weights, int days)
{
    int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (daysReq(weights, mid) <= days)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}