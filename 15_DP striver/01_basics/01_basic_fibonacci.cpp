#include <bits/stdc++.h>
using namespace std;

//memoization
//tc= o(n), sc=O(n)+O(n)
/*
int f(int n, vector<int>& dp){
    //base case
    if(n<=1){
        return n;
    }
    //check if subproblem has been previously solved
    if(dp[n]!=-1) return dp[n];

    //storing ans in dp array
    return dp[n]=f(n-1,dp)+f(n-2,dp);
}

int main(){
    int n;
    cin>>n;
    //declaring dp array
    vector<int> dp(n+1,-1);
    cout<<f(n,dp);
    return 0;
}
*/

//tabulation
//tc = O(n), sc=O(1)

    int main(){
        int n;
        cin>>n;
        int prev2=0;
        int prev=1;
        for(int i=2;i<=n;i++){
            int curri=prev+prev2;
            prev2=prev;
            prev=curri;
        } 
        cout<<prev;
        return 0;    
    }
