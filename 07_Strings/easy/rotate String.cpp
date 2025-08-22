#include <bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal)
{
    /*  Brute Force
        int count=s.length()-1;

        if(s.length()!=goal.length()) return false;
        if(s==goal) return true;

        while(count>0){
            char temp;
            for(int i=0;i<s.length();i++){
                if(i==0){
                    temp=s[i];
                    continue;
                }
                s[i-1]=s[i];
                if(i==s.length()-1){
                    s[i]=temp;
                }

            }
            if(s==goal) return true;
            count--;
        }
        return false;
    }
    */

    // ANOTHER APPROACH
    // In s+s , goal should be a substring
    if (s.length() != goal.length())
        return false;
    if (s == goal)
        return true;
    string concatenatedString = s + s;
    for (int i = 0; i < s.length(); i++)
    {
        if (concatenatedString.substr(i, s.length()) == goal)
        {
            return true;
        }
    }
    return false;

    // or OPTIMALLY,  instead of substr , we can use find
    /*
    if (s.length() != goal.length()) return false;


    string doubledString = s + s;


    return doubledString.find(goal) < doubledString.length();

    TC->O(N), SC->O(N)
    */
}

int main()
{
    string s, t;
    cin >> s >> t;
    bool result = rotateString(s, t);
    cout << result;
}