#include <bits/stdc++.h>
using namespace std;

int minElement(vector<int> &bloomDay, int n)
{
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        ans = min(ans, bloomDay[i]);
    }
    return ans;
}
int maxElement(vector<int> &bloomDay, int n)
{
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, bloomDay[i]);
    }
    return ans;
}

int possibleBouquets(vector<int> &bloomDay, int k, int day, int n)
{
    int count = 0;
    int bouquets = 0;
    for (int i = 0; i < n; i++)
    {
        if (bloomDay[i] <= day)
        {
            count++;
            if (count == k)
            {
                bouquets++;
                count = 0; // Reset count after making a bouquet
            }
        }
        else
        {
            count = 0; // Reset count if the flower hasn't bloomed by 'day'
        }
    }
    return bouquets;
}
int minDays(vector<int> &bloomDay, int m, int k)
{
    int n = bloomDay.size(); // no. of flowers

    if ((long long)m * k > n)
    {
        return -1;
    }
    int low = minElement(bloomDay, n);
    int high = maxElement(bloomDay, n);
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        if (possibleBouquets(bloomDay, k, mid, n) >= m)
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