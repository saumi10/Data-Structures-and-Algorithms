#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //precomputation (can be done in above for loop too simultaneously )
    unordered_map <int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }


    //iterating in the map to see how keys n values are stored
    // (here not in sorted order since we used unordered_map)
    for(auto it: mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }


    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        //fetch
        cout<<mpp[num]<<endl;
    }


    /*
    input:
    9 
    1 5 32 12 7 32 1 90 32
    7
    2
    32
    0
    1
    17
    12
    90


    output: 
    3
    0
    2
    0
    1
    1
    */
    
}