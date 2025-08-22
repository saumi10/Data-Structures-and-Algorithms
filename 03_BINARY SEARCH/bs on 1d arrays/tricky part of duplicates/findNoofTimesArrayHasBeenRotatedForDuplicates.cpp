#include <bits/stdc++.h>
using namespace std;
// similar way to  find minimum in rotated sorted array (with duplicates), just return nums[end]

int f(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mini = INT_MAX;
    while (start < end)
    {
        int mid = start + ((end - start) / 2);
        // important part of logic here
        if (arr[mid] > arr[end])
        {
            start = mid + 1;
        }
        else if (arr[mid] < arr[end])
        {
            end = mid;
        }
        else
        {
            end--;
        }
    }
    return end;
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

    int ans = f(arr, n);
    cout << ans << endl;
}