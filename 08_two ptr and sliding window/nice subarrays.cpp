// type 3 of sliding window
#include <bits/stdc++.h>
using namespace std;
int func2(vector<int> &nums, int k)
{
    int countOdd = 0;
    int l = 0, r = 0;
    int total = 0;

    while (r < nums.size())
    {
        if (nums[r] % 2 != 0)
        {
            countOdd++;
        }
        while (countOdd > k)
        {
            if (nums[l] % 2 != 0)
                countOdd--;
            l++;
        }
        total += r - l + 1;
        r++;
    }
    return total;
}
int numberOfSubarrays(vector<int> &nums, int k)
{
    int countOdd = 0;
    int l = 0, r = 0;
    int total = 0;

    while (r < nums.size())
    {
        if (nums[r] % 2 != 0)
        {
            countOdd++;
        }
        while (countOdd > k)
        {
            if (nums[l] % 2 != 0)
                countOdd--;
            l++;
        }
        total += r - l + 1;
        r++;
    }
    int finalAns = total - func2(nums, k - 1);
    return finalAns;
}
int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int goal;
    cin >> goal;

    int ans = numberOfSubarrays(arr, goal);

    cout << ans;
}