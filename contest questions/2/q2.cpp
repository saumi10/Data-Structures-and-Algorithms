#include <bits/stdc++.h>
using namespace std;

void solve(vector< string > matrix, int n, int k) {
    
    
    for (int i = 0; i < n; i += k) {
        for (int j = 0; j < n; j += k) {
            cout << matrix[i][j] ;
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while(t--) {
        int n, k;
        cin >>n>>k; // Matrix dimension and step size
        vector<string> a(n);
        for(auto &s: a){
            cin>>s;
        }


        solve(a, n, k); // Process and print matrix for each test case

        
    }
    
}
