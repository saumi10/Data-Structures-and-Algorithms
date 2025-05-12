// https://www.geeksforgeeks.org/problems/find-nth-root-of-m5843/1

#include <bits/stdc++.h>
using namespace std;

int NthRoot(int n, int m)
{
    // Code here.
    int low = 1;
    int high = m;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (pow(mid, n) < m)
        {
            low = mid + 1;
        }
        else if (pow(mid, n) > m)
        {
            high = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}