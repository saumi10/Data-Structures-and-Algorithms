#include <bits/stdc++.h>
using namespace std;
int f(int n)
{
    int i = 0;
    int c = -1;
    while (i >= 0)
    {
        if (n >= pow(2, i) && n < pow(2, i + 1))
        {
            return c = i + 1;
        }
        i++;
    }
}
vector<int> g(int c, int n)
{
    vector<int> v;
    int i = 0;
    while (c > 0)
    {
        int count = pow(2, i);
        for (int k = 1; k <= count; k++)
        {
            if (n > 0)
            {
                v.push_back(c);
            }

            n--;
        }
        c--;

        count = pow(2, i++);
    }

    return v;
}

int main()
{
    // your code goes here

    int n;
    cin >> n;
    int c = f(n); //function to calculate minimum no. required
    vector<int> getVec = g(c, n); //function to get vector 
    cout << c << endl;
    for (auto it : getVec)
    {
        cout << it << " ";
    }
}
