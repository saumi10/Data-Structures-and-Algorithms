#include <bits/stdc++.h>
using namespace std;
int findMissingElement(int arr[], int n){
    int xor1=0;
    int xor2=0;
    for(int i=0;i<n-1;i++){
        xor2=xor2^(arr[i]);
        xor1=xor1^(i+1);
    }
    xor1=xor1^n;
    return xor1^xor2;
}

int main(){
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int missingElement=findMissingElement(arr, n);
    cout<<missingElement<<endl;
}