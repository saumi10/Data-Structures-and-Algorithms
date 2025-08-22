#include <bits/stdc++.h>
using namespace std;
// for unique elements ******
int f(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    int mini = INT_MAX;
    int index = -1;
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        // left is sorted
        if (arr[low] <= arr[mid])
        {
            if (arr[low] < mini)
            {
                mini = arr[low];
                index = low;
            }
            low = mid + 1;
        }
        else // right is sorted
        {
            if (arr[mid] < mini)
            {
                mini = arr[mid];
                index = mid;
            }
            high = mid - 1;
        }
    }
    return index;
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
