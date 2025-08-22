#include <bits/stdc++.h>
using namespace std;

void moveZeroesToEnd(int arr[], int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=0) i++;
        if(arr[j]!=0 && arr[i]==0){
            swap(arr[i],arr[j]);
        }
    }

    

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    moveZeroesToEnd(arr,n);

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}