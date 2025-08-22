#include <bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int index=-1;
        //finding breakpoint
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }
        if(index==-1){
            reverse(nums.begin(),nums.end());
        }
        else{
            for(int i=n-1;i>index;i--){
                if(nums[i]>nums[index]){
                    swap(nums[i],nums[index]);
                    break;
                }
            }
            reverse(nums.begin()+index+1,nums.end());
        }
    
    return nums;
}

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n,0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans = nextPermutation(arr); //or directly using stl function next_permutation(arr,arr+n)
    for(auto it:ans){
        cout<<it<<" ";
    }
}
