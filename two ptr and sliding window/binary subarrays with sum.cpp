//type 3 of sliding window
#include <bits/stdc++.h>
using namespace std;
int func2(vector<int>& nums, int goal){
         //function 2: sum<=goal
        if(goal<0) return 0;
        int sum=0;
        int count=0;
        int l=0,r=0;
        while(r<nums.size()){
            sum+=nums[r];
            while(sum>goal){
                sum-=nums[l];
                l++;
            }
            count+=r-l+1;
            r++;

        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        //function 1: sum<=goal
        if(goal<0) return 0;
        int sum=0;
        int count=0;
        int l=0,r=0;
        while(r<nums.size()){
            sum+=nums[r];
            while(sum>goal){
                sum-=nums[l];
                l++;
            }
            count+=r-l+1;
            r++;

        }

        int finalCount=count-func2(nums,goal-1); 
        return finalCount;  
        
    }
int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int goal;
    cin>>goal;

    int ans =numSubarraysWithSum(arr,goal);

    cout << ans;
}