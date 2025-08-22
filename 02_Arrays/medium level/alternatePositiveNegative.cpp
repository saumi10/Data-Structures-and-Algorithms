#include <bits/stdc++.h>
using namespace std;
//variety 2 , unequal number of pos n neg elements
vector<int> alternateElements(vector <int>& nums,int n){
    //step 1 : filling the pos n neg vectors
    vector<int> pos,neg;
    for(int i = 0; i < nums.size();i++){
        if(nums[i]>0){
            pos.push_back(nums[i]);
        }
        else{
            neg.push_back(nums[i]);
        }
    }

    //step 2: putting back in nums by rearranging
    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            nums[2*i]=pos[i];
            nums[2*i+1]=neg[i];


        }
        int index=neg.size()*2; //index of nums to put leftover elements from
        for(int i=neg.size();i<pos.size();i++){
            nums[index]=pos[i];
            index++;
        }
    }
    else{
        for(int i=0;i<pos.size();i++){
            nums[2*i]=pos[i];
            nums[2*i+1]=neg[i];


        }
        int index=pos.size()*2; //index of nums to put leftover elements from
        for(int i=pos.size();i<neg.size();i++){
            nums[index]=neg[i];
            index++;
        }

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

    vector<int> ans = alternateElements(arr, n);
    for(auto it:ans){
        cout<<it<<" ";
    }
}
