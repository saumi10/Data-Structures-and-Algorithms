#include <bits/stdc++.h>
using namespace std;

string minWindow(string s, string t)
{
    if (t.length() > s.length())
        return "";
    unordered_map<char, int> mpp;
    int sIndex = -1;
    int cnt = 0;
    int l = 0, r = 0;
    int minlen = INT_MAX;
    for (int i = 0; i < t.length(); i++)
    {
        mpp[t[i]]++;
    }
    while (r < s.length())
    {
        if (mpp[s[r]] > 0)
            cnt++;
        mpp[s[r]]--;
        while (cnt == t.length())
        {
            if (r - l + 1 < minlen)
            {
                minlen = r - l + 1;
                sIndex = l;
            }

            mpp[s[l]]++;

            if (mpp[s[l]] > 0)
            {
                cnt--;
            }
            l++;
        }
        r++;
    }
    return sIndex == -1 ? "" : s.substr(sIndex, minlen);
}
int main()
{

    string s;
    string t;
    cin >> s >> t;

    string ans = minWindow(s, t);

    cout << ans;
}