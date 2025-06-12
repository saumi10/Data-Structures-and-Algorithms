// https://leetcode.com/problems/jump-game/description/

#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int> &nums)
{
    int maxIndex = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i > maxIndex)
            return false;

        maxIndex = max(maxIndex, i + nums[i]);
    }
    return true;

    /*
        for(int i=0;i<=maxIndex;i++){
            maxIndex=max(maxIndex, i+nums[i]);
            if(maxIndex>=nums.size()-1){
                return true;
            }
        }
        return false;
    */
}