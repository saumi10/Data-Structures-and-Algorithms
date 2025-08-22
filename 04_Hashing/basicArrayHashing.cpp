#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //precomputation using hash array
    int hash[100]={0}; //assuming numbers to be found will be between 0 to 99
    for(int i=0; i<n; i++){
        hash[arr[i]]+=1;

    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<hash[number]<<endl;

    }


}