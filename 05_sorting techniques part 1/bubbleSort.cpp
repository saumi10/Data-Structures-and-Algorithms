#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int array[], int n){
    for(int i=n-1; i>0; i--){
        int didSwap=0;
        for(int j=0; j<=i-1; j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
                didSwap=1;
            }
        }
        if(didSwap==0){
            break;
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

    bubbleSort(arr,n);

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}