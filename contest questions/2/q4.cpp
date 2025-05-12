#include <bits/stdc++.h>
using namespace std;
long long solve(int n, int x) {
    long long count = 0;

    // Iterate over possible values of a
    for (int a = 1; a <= x; ++a) {
        // Iterate over possible values of b
        for (int b = 1; b <= x - a; ++b) {
            // Iterate over possible values of c
            int c_max = x - a - b;
            if (c_max <= 0) break;

            for (int c = 1; c <= c_max; ++c) {
                if (a * b + a * c + b * c <= n) {
                    ++count;
                }
            }
        }
    }

    return count;
}

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n,x;
        cin >> n>>x;
        
        long long sol = solve(n,x);
        cout << sol << endl;
    }
}