// given solution is better for vareity 1 but optimal for vareity 2
// optimal solution for vareity 1 (yes or no) can be solved by two pointer starting from beginning n end respectively
#include <bits/stdc++.h>
using namespace std;

string twoSum(int arr[], int n, int target)
{
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int a = arr[i];
        int b = target - a;
        if (mpp.find(b) != mpp.end())
        {
            return "YES"; // return {mpp(b),i} =>variety 2 return values are indexes of the two nos.
        }
        mpp[a] = i;
    }
    return "NO";
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
    string result = twoSum(arr, n, target);
    cout << result << endl;
}