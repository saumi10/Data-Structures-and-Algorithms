#include <bits/stdc++.h>
using namespace std;

int search(int nums[], int low, int high, int target)
{

    // base case
    if (low > high)
    {
        return -1;
    }

    int mid = (low + high) / 2;

    if (nums[mid] == target)
        return mid;
    else if (target > nums[mid])
    {
        return search(nums, mid + 1, high, target);
    }
    else
    {
        return search(nums, low, mid - 1, target);
    }
}

int main()
{

    int n, target;
    cin >> n >> target;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int low = 0;
    int high = n - 1;

    int targetIndex = search(arr, low, high, target);
    cout << targetIndex << endl;
}
