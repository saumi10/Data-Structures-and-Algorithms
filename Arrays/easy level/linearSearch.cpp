#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int n, int num ){
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;

}

int main(){
    int n,num;
    cin>>n>>num;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x=linearSearch(arr,n,num);
    cout<< x;
   

}