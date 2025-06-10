 #include <bits/stdc++.h>
using namespace std;

 
 int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0,rsum=0,maxSum=0;
        for(int i=0;i<k;i++){
            lsum+=cardPoints[i];
        }
        maxSum=lsum;
        int rightIndex=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
            lsum-=cardPoints[i];
            rsum+=cardPoints[rightIndex];
            rightIndex--;
            maxSum=max(maxSum,(lsum+rsum));
        }
        return maxSum;
}
int main()
{

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int ans = maxScore(arr,k);

    cout << ans;
}