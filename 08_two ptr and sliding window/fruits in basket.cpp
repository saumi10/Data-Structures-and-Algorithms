#include <bits/stdc++.h>
using namespace std;

int totalFruit(vector<int> &fruits)
{
    unordered_map<int, int> mpp;
    int maxlen = 0;
    int l = 0, r = 0;
    while (r < fruits.size())
    {
        mpp[fruits[r]]++;
        if (mpp.size() > 2)
        {
            mpp[fruits[l]]--;
            if (mpp[fruits[l]] == 0)
                mpp.erase(fruits[l]);
            l++;
        }
        else
        {
            maxlen = max(maxlen, r - l + 1);
        }

        r++;
    }
    return maxlen;
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

    int ans = totalFruit(arr);

    cout << ans;
}