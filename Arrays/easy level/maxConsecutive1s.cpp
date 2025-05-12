#include <bits/stdc++.h>
using namespace std;
int maxConsecutiveOnes(int arr[] ,int n){
    int maxi=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count+=1;
            if(count>maxi){
                maxi=count;
            } //or replace this inner if with: maxi=max(maxi,count);
        }
        else{
            count=0;
        }
    }
    return maxi;

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=maxConsecutiveOnes(arr, n);
    cout<<maxi<<endl;
}