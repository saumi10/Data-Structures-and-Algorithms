#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t)
{
    unordered_map<char, char> mpp1;
    unordered_map<char, char> mpp2;
    for (int i = 0; i < s.length(); i++)
    {
        if (mpp1[s[i]] != '\0' || mpp2[t[i]] != '\0')
        {
            if (mpp1[s[i]] != t[i] || mpp2[t[i]] != s[i])
            {
                return false;
            }
        }
        else
        {
            mpp1[s[i]] = t[i];
            mpp2[t[i]] = s[i];
        }
    }
    return true;
}

int main()
{
    string s, t;
    cin >> s >> t;
    bool result = isIsomorphic(s, t);
    cout << result;
}