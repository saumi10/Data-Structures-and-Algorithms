//part 2 , with duplicates

#include <bits/stdc++.h>
using namespace std;

bool f(int arr[], int n, int target)
{
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            return true;
        }
        //lines for part2 
        if(arr[mid]==arr[low]&&arr[mid]==arr[high]){
            low=low+1;
            high=high-1;
            continue;
        }
        //left sorted
        if(arr[low]<=arr[mid]){
            //check and eliminate
            if(arr[low]<=target && target<=arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        //right sorted
        else{
            if(arr[mid]<=target && target<=arr[high]){
                low=mid+1;

            }
            else{
                high=mid-1;
            }

        }

    }
    return false;
}

int main()
{

    int n, target;
    cin >> n >> target;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool ansIndex = f(arr, n, target);
    if(ansIndex==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
