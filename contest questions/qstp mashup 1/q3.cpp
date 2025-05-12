#include <bits/stdc++.h>
using namespace std;
int countBeautifulYears(int n)
{
    if (n < 10)
    {
        return n;
    }
    else if (n == 10)
    {
        return n - 1;
    }
    else
    {
        int num = n;    // 4491
        int number = n; // 4491
        int firstDigit = 0;
        int countDigits = 0;
        int beautifulNum = 0;
        while (num > 0)
        {
            num=num / 10;
            countDigits++; // 4
        }
        int totalDigits = countDigits;   // 4
        int countOf9s = countDigits - 1; // 3
        while (countDigits > 0)
        {
            if (countDigits == 1)
            {
                firstDigit = number; // 4
            }
            number = number / 10;
            countDigits--;
        }
        for (int i = 0; i < totalDigits; i++)
        {
            beautifulNum = (beautifulNum * 10) + firstDigit;
        }
        if (n >= beautifulNum)
        {
            return (9 * countOf9s) + (firstDigit);
        }
        else
        {
            return (9 * countOf9s) + (firstDigit - 1);
        }
    }
    
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int beautifulYears = countBeautifulYears(n);
        cout << beautifulYears << endl;
    }
}