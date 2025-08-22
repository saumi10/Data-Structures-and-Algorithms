#include <bits/stdc++.h>
using namespace std;
// optimal solution
int longestConsecutiveSequence(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
    {
        return 0;
    }
    int longest = 1;
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(nums[i]);
    }

    for (auto it : st)
    {
        int x = it;
        int count = 1;
        if (st.find(x - 1) == st.end())
        {
            while (st.find(x + 1) != st.end())
            {
                x = x + 1;
                count++;
            }
            longest = max(longest, count);
        }
    }
    return longest;
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
    int ans = longestConsecutiveSequence(arr);
    cout << ans << endl;
}

/* BRUTE FORCE APPROACH
bool linearSearch(vector<int>& nums,int num){
    for(int i=0;i<nums.size();i++){
        if(nums[i]==num){
            return true;
        }
    }
    return false;
}
int longestConsecutiveSequence(vector<int> &nums)
{
    int longest =1;
    for(int i=0; i<nums.size();i++){
        int x=nums[i];
        int count=1;
        while(linearSearch(nums,x+1)==true){
            x=x+1;
            count+=1;
        }
        longest=max(longest,count);
    }
    return longest;
}

//better solution
int longestConsecutiveSequence(vector<int> &nums){
    int n=nums.size();
    sort(nums.begin(), nums.end());
    //nums[]={1,1,2,2,2,3,4,100,101,103}
    int longest=1;
    int cnt=0;
    int lastSmaller=INT_MIN;
    for(int i=0;i<n;i++){
        if(nums[i]-1==lastSmaller){//next consecutive element found say 3
            cnt+=1;
            lastSmaller=nums[i];
        }
        else if(nums[i]!=lastSmaller){ //totally new element found say 1 or 100 or 103
            cnt=1;
            lastSmaller=nums[i];
        }
        longest=max(longest,cnt);
    }
    return longest;

}



*/
