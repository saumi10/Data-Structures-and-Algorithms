#include <bits/stdc++.h>
using namespace std;

string removeOutermostParanthesis(string s, int n)
{
    
    string result;
    int i = 0;
    int open = 0;
    int close = 0;
    while (i < n)
    {
        if (s[i] == '(')
        {
            open += 1;
            if (open != 1)
            {
                //cout << "(";
                result+='(';
            }
        }
        else
        {
            close += 1;
            if (close != open)
            {
                //cout << ")";
                result+=')';
            }
        }
        if (open == close)
        {
            open = 0;
            close = 0;
        }
        i++;
    }
    return result;
}
int main()
{
    int n;
    
    string s;
    cin>>s;
    n=s.length();
    string result =removeOutermostParanthesis(s, n);
    cout<<result;
}