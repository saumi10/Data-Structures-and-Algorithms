#include <bits/stdc++.h>
using namespace std;

int maxElement(vector<int> &piles)
{
    //
    // finding max no. of bananas in the piles array which will be our high in BS
    int n = piles.size();
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, piles[i]);
    }
    return maxi;
}
long long int calculateTotalHours(vector<int> &piles, int hourlyRate)
{
    long long int totalH = 0;
    int n = piles.size();
    for (int i = 0; i < n; i++)
    {
        totalH += ceil((double)piles[i] / (double)hourlyRate);
    }
    return totalH;
}
int minEatingSpeed(vector<int> &piles, int h)
{
    // binary search
    int low = 1;
    int high = maxElement(piles);
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        // now check if mid is the hourly rate of eating , then how many total hours is it taking
        long long int totalH = calculateTotalHours(piles, mid);
        if (totalH <= h)
        {
            // probable answer but we want to check if it is minimum
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}