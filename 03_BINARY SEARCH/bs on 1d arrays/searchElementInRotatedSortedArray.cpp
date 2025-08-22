// part 1 , unique elements

#include <bits/stdc++.h>
using namespace std;

int f(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        // left sorted
        if (arr[low] <= arr[mid])
        {
            // check and eliminate
            if (arr[low] <= target && target <= arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        // right sorted
        else
        {
            if (arr[mid] <= target && target <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{

    int n, target;
    cin >> n;
    cin>>target;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ansIndex = f(arr, n, target);
    cout << ansIndex << endl;
}
