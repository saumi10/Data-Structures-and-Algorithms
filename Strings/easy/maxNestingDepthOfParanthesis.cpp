#include <bits/stdc++.h>
using namespace std;
int maxDepth(string s)
{

    int maxCount = 0;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            count++;
        }
        else if (s[i] == ')')
        {
            count--;
        }
        else
        {
            continue;
        }
        maxCount = max(count, maxCount);
    }
    return maxCount;
}
int main()
{
    string s;
    cin >> s;
    int result = maxDepth(s);
    cout << result;
}