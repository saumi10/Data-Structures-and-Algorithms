#include <bits/stdc++.h>
using namespace std;
// find minimum in rotated sorted array
//  for unique elements
int f(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    int mini = INT_MAX;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[low] <= arr[mid])
        {
            mini = min(arr[low], mini);
            low = mid + 1;
        }
        else
        {
            mini = min(arr[mid], mini);
            high = mid - 1;
        }
    }
    return mini;
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
