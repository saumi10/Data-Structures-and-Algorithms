#include <bits/stdc++.h>
using namespace std;

void reverseSubArray(int arr[], int n,int d){
    int l=d;
    int r=n;
    while(l<r){
        swap(arr[l],arr[r-1]);
        l++;
        r--;
    }

    

}

int main(){
    int n,d;
    cin>>n>>d;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    reverseSubArray(arr,n,d);

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}