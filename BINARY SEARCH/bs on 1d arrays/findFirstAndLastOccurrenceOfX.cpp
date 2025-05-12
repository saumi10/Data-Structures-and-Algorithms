#include <bits/stdc++.h>
using namespace std;

pair<int, int> firstAndLastOccurrence(int arr[], int n, int x)
{
    int lb = lower_bound(arr, arr + n, x) - arr;
    int ub = upper_bound(arr, arr + n, x) - arr;

    if ((lb == n) || arr[lb] != x)
    {
        return {-1, -1};
    }
    else
    {
        return {lb, ub - 1};
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

    pair<int, int> ansIndex = firstAndLastOccurrence(arr, n, target);
    cout << ansIndex.first << " " << ansIndex.second << endl;
}
