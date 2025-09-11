#include <bits/stdc++.h>
using namespace std;
//memoization technique, dp array, going from 0 to top
class Solution {
public:
    int f(int index,int n,vector<int>& dp){
        //base cases
        if(index==n){
            return 1;
        }
        if(index>n){
            return 0;
        }

        if(dp[index]!=-1) return dp[index];
        //storing ans in dp array
        return dp[index]=f(index+1,n,dp)+f(index+2,n,dp);
        

    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return f(0,n,dp);
    }
};

//memoization,dp array,starting with index=n th step and going down to 0, just like fibonacci problem
class Solution {
public:
    int f(int index,vector<int>& dp){
        //base case
        if(index==0) return 1;  //  if standing at 0, means we got 1 way from n to 0
        if(index==1) return 1; //if standing at 1, now only 1 way to reach 0

        if(dp[index]!=-1) return dp[index]; //checking if ans to subproblem exists in dp array

        return dp[index]=f(index-1,dp)+f(index-2,dp); //storing in dp array


    }    
    int climbStairs(int n) {
        vector<int>dp(n+1,-1); //initialize dp array
        return f(n,dp);
    }
};

/*Full DP Array Way (tabulation)
If you’re new to DP, think of filling an array:
This is easy to understand, but uses O(n) space and no recursion now.
*/

int climbStairs(int n) {
    vector<int> dp(n+1, 0);
    dp[0] = 1; // 1 way to stay at ground
    dp[1] = 1; // 1 way to reach step 1 (just 1 step)

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}



//tabulation, removing dp array (space optimization) O(1) 
class Solution {
public: 
    int climbStairs(int n) {
        int prev2=1; //dp[0]
        int prev=1; //dp[1]

        for(int i=2;i<=n;i++){
            int curr=prev+prev2;
            prev2=prev;
            prev=curr;
        }
        return prev;

    }
};

//DP array is easy to visualize (O(n) space).
//Two variables is optimized (O(1) space).
//Both rely on the same recurrence relation (Fibonacci-like).