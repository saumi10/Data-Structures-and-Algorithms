// LONGEST SUBARRAY WITH GIVEN SUM k
//  below is the better solution for array containing positives n zeroes ,its optimal is using two pointer approach
//  but it is the optimal solution for array containing +ves,zeroes,-ves

#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k)
{
    map<long long, int> prefixSumMap;
    long long sum = 0;
    int maxLen = 0;

    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }

        long long rem = sum - k;
        if (prefixSumMap.find(rem) != prefixSumMap.end())
        { // if prefix sum found in hashmap
            int len = i - prefixSumMap[rem];
            maxLen = max(maxLen, len);
        }

        if (prefixSumMap.find(sum) == prefixSumMap.end())
        { // checking if sum doesn't already exist in the hashmap as prefix sum (key) cuz we dont wanna change it's value again n again
            prefixSumMap[sum] = i;
        }
    }
    return maxLen;
}

int main()
{
    int n;
    long long k;
    cin >> n >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        arr.push_back(input);
    }

    int maxLen = longestSubarrayWithSumK(arr, k);
    cout << maxLen;
}