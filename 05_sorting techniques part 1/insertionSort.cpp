#include <bits/stdc++.h>
using namespace std;

/*void insertionSort(int array[], int n){
    for(int i=0; i<=n-1; i++){

        for(int j=i; (j>0 && array[j-1]>array[j]); j--){
            
            swap(array[j],array[j-1]);
        }
    }
}*/
void insertionSort(int array[], int n){
    for(int i=1; i<=n-1; i++){
        int j=i;

       while(j>0 && array[j-1]>array[j]){
            
            swap(array[j],array[j-1]);
            j--;
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

    insertionSort(arr,n);

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}