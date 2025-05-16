// single element  in sorted array whereas others appear twice
#include <bits/stdc++.h>
using namespace std;

int singleElement(int nums[], int n)
{
    if (n == 1)
    {
        return nums[0];
    }
    if (nums[0] != nums[1])
    {
        return nums[0];
    }
    if (nums[n - 1] != nums[n - 2])
    {
        return nums[n - 1];
    }
    // applying BS on trimmed down search space
    int low = 1, high = n - 2;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        // if answer found at mid
        if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
        {
            return nums[mid];
        }
        // eliminating half which doesnt contain our answer element
        // on the basis of mid index (if it is odd/even) and
        // where does it have its duplicate element

        // if mid is an odd index AND duplicate on its left side
        // OR
        // if mid is an EVEN index AND duplicate on its right side
        // so eliminate left half as answer is on right half
        if ((mid % 2 != 0 && nums[mid] == nums[mid - 1]) || (mid % 2 == 0 && nums[mid] == nums[mid + 1]))
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = singleElement(arr, n);
    cout << ans << endl;
}
