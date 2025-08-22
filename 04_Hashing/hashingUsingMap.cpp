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
    map <int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }


    //iterating in the map to see how keys n values are stored
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
    
}

//find duplicates in array using hashing
 /*vector<int> duplicates(vector<long long> arr) {
        // code here
        map<int , int>mp;
        for(int i : arr){
            mp[i]++;
        }
        vector<int> v;
        for( int i=0;i<mp.size();i++){
            if(mp[i] > 1) v.push_back(i);
        }
        if(v.size() == 0) v.push_back(-1);
        return v;
    }
    */