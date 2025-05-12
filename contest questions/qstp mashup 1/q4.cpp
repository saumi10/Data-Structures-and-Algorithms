// to be solved
#include <bits/stdc++.h>
using namespace std;
int solve(int n, int arr[])
{
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]=i;
    }
    sort(arr,arr+n);
    int x=arr[n-1];
    int y=arr[n-2];
    int z=arr[n-3];
    int xy=abs(x-y);
    int xz=abs(x-z);
    int yz=abs(y-z);
    if(xy>xz && xy>yz){
        return xy;
    }
    if(xz>xy && xz>yz){
        return xz;
    }
    else{
        return yz;
    }
    
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        int sol = solve(n , arr);
        cout << sol << endl;
    }
}