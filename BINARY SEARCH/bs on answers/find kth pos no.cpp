#include <bits/stdc++.h>
using namespace std;

int findMissing(vector<int> vec, int k){
    int n=vec.size();
    int low=0, high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        int missing=vec[mid]-(mid+1);
        if(missing<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }
    return k+high+1;

}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int result=findMissing(arr,k);
    cout<<result;
}