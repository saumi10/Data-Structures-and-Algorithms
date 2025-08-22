//selection sort
//ek ko pakda as minimum , compare kia aage ke elements se, koi aur minimum nikla toh swap krdia , then moved forward

#include <bits/stdc++.h>
using namespace std;
//mini is the index at which minimum number is present during a check
void selection_sort(int array[], int n){
    for(int i=0;i<=n-2;i++){ //loop to swap current index with mini and move forward to swap next element 
        int mini=i; 
        for(int j=i;j<=n-1;j++){//loop to find actual mini and update its value
            if(array[j]<array[mini]){//here array[mini] is curret element at index i
                mini=j;
            }
        }
        swap(array[i],array[mini]);
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    selection_sort(arr,n);

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}