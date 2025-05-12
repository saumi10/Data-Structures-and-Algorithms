#include <bits/stdc++.h>
using namespace std;

//q1. Reverse an array of integers

void reverse_array(int array[], int n , int i){
    if (i>=(n/2)){
        return;
    }
    //swap(array[i], array[n-1-i]); swapping directly using the swap func. of stl
    //otherwise
    int temp = array[i];
    array[i]=array[n-1-i];
    array[n-1-i]=temp;

    reverse_array(array,n,i+1);
    

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){ //array input
        cin>>arr[i];
    }

    reverse_array(arr,n,0); //function call

    for(int i=0;i<n;i++){ //reversed array print
        cout<<arr[i]<<" ";
    }

    
}