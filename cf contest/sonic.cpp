#include <bits/stdc++.h>
using namespace std;

bool canDeliverAtSpeed(double speed, const vector<pair<int, int>> &intervals)
{
    for (int i = 1; i <= intervals.size(); ++i)
    {
        int A = intervals[i - 1].first;
        int B = intervals[i - 1].second;
        // Check if the current speed satisfies the constraints
        if (speed > static_cast<double>(i) / A || speed < static_cast<double>(i) / B)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t)
    {
        int N;
        cin >> N;
        vector<pair<int, int>> intervals(N);

        for (int i = 0; i < N; ++i)
        {
            cin >> intervals[i].first >> intervals[i].second;
        }

        double low = 0, high = 1e6;
        double bestSpeed = -1;
        const double eps = 1e-7; // Precision range for binary search

        while (high - low > eps)
        {
            double mid = (low + high) / 2;
            if (canDeliverAtSpeed(mid, intervals))
            {
                bestSpeed = mid;
                high = mid; // Try to find a smaller valid speed
            }
            else
            {
                low = mid; // Mid is too slow, increase the speed
            }
        }

        if (bestSpeed == -1)
        {
            cout << "Case #" << t << ": -1" << endl;
        }
        else
        {
            cout << fixed << setprecision(6) << "Case #" << t << ": " << bestSpeed << endl;
        }
    }
}

int main()
{
    solve();
    return 0;
}