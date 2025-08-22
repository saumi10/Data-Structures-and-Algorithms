// https://www.geeksforgeeks.org/problems/square-root/0
#include <bits/stdc++.h>
using namespace std;

long long int floorSqrt(long long int n)
{

    long long int low = 1;
    long long int high = n;
    long long int ans = 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if ((mid) <= (n / mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}