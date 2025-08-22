#include <bits/stdc++.h>
using namespace std;

void reverseSubArray(int arr[], int d, int n)
{
    int l = d;
    int r = n;
    while (l < r)
    {
        swap(arr[l], arr[r - 1]);
        l++;
        r--;
    }
}

void leftRotateArray(int arr[], int n, int d)
{
    d = d % n; // very important
    reverseSubArray(arr, 0, d);
    reverseSubArray(arr, d, n);
    reverseSubArray(arr, 0, n);

    // or directly use the in-built reverse function
    // reverse(arr,arr+d);
    // reverse(arr+d,arr+n);
    // reverse(arr,arr+n);
    // it is non-inclusive of the second parameter that's why arr+d and arr+n
}

int main()
{
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    leftRotateArray(arr, n, d);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

/* To shift elements right by k places (brute force approach) and left by k places brute force in notebook
void rotate(vector<int>& nums, int k) {
        vector<int> temp;
        int n=nums.size();
        k=k%n;

        for(int i=n-k;i<n;i++){
            temp.push_back(nums[i]);
        }
        for(int i=n-k-1;i>=0;i--){
            nums[i+k]=nums[i];
        }
        for(int i=0;i<k;i++){
            nums[i]=temp[i];
        }

    }

}
*/