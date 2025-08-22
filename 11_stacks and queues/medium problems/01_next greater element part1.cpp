#include<bits/stdc++.h>
using namespace std;


vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        stack<int>st;
        unordered_map<int,int>mpp;
        for (int i = nums2.size() - 1; i >= 0; --i) {
        while (!st.empty() && st.top() <= nums2[i]) {
            st.pop();
        }

        mpp[nums2[i]] = st.empty() ? -1 : st.top();
        st.push(nums2[i]);
    }
        
        for(int i=0;i<nums1.size();i++){
            int x=mpp[nums1[i]];
            ans.push_back(x);
        }
        return ans;
        
}

int main(){
    vector<int>nums1={1,4,5,5,12};
    vector<int>nums2={4,12,3,4,5,3,1,2,4,6};

    vector<int>ans=nextGreaterElement(nums1,nums2);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }



}