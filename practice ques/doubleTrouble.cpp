// https://www.codechef.com/START148D/problems/JUSTTWO
#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
long long solve(vector<int> &a, int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq(a.begin(), a.end());

    while (k--)
    {
        int smallest = pq.top();
        pq.pop();
        smallest *= 2;
        pq.push(smallest);
    }

    long long sum = 0;
    while (!pq.empty())
    {
        sum = (sum + pq.top()) % MOD;
        pq.pop();
    }

    return sum;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long ans = solve(a, n, k);
        cout << ans << endl;
    }
}
