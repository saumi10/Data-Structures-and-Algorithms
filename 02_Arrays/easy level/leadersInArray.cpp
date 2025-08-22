#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int> &nums)
{
    int n = nums.size();
    int maxi = INT_MIN;
    vector<int> leader;
    for (int i = n - 1; i >= 0; i--)
    {
        if (nums[i] >= maxi)
        {
            leader.push_back(nums[i]);
        }
        maxi = max(maxi, nums[i]);
    }

    sort(leader.begin(), leader.end(), greater<int>());
    return leader;
}

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans = leaders(arr); // or directly using stl function next_permutation(arr,arr+n)
    for (auto it : ans)
    {
        cout << it << " ";
    }
}
