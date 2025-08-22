#include <bits/stdc++.h>
using namespace std;

int myAtoi(string s)
{
    if (s.length() == 0)
        return 0;
    bool nodig = true;
    bool intStart = false;
    bool negSign = false;
    bool leadZero = false;
    string ans = "";
    for (char ch : s)
    {
        if (intStart == false)
        {
            if (ch == ' ' && leadZero == false && negSign == false)
            {
                continue;
            }
            else if ((ch == '-' || ch == '+') && leadZero == false && negSign == false)
            {
                if (ch == '-')
                {
                    ans += '-';
                    negSign = true;
                    continue;
                }
                else
                {
                    negSign = true;
                    continue;
                }
            }
            else if (isdigit(ch) && ch != '0')
            {
                intStart = true;
                ans += ch;
                nodig = false;
            }
            else if (isdigit(ch) && ch == '0')
            {
                leadZero = true;
                continue;
            }
            else
            {
                return 0;
            }
        }
        else if (isdigit(ch))
        {
            intStart = true;
            ans += ch;
            nodig = false;
        }
        else
        {
            break;
        }
    }
    if (nodig == true)
    {
        return 0;
    }
    long long num;

    try
    {
        num = stoll(ans);
    }
    catch (out_of_range &e)
    {
        return (ans[0] == '-') ? INT_MIN : INT_MAX;
    }

    if (num <= INT_MIN)
    {
        return INT_MIN;
    }
    else if (num >= INT_MAX)
    {
        return INT_MAX;
    }
    else
    {
        return num;
    }
}

int main()
{
    string s;
    cin >> s;
    int result = myAtoi(s);
    cout << result;
}