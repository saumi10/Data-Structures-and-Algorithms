#include <bits/stdc++.h>
using namespace std;
// or directly use lb=lower_bound(arr,arr+n,target)-arr or ub=upper_bound(arr,arr+n,target)-arr to get respective index values
int lowerBound(int nums[], int n, int target)
{

    int low = 0;
    int high = n - 1;
    int ans = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] >= target)
        { // for upper bound just remove '=' sign from here
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
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

    int ansIndex = lowerBound(arr, n, target);
    cout << ansIndex << endl;
}
