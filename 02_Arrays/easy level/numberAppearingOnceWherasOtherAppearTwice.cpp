#include <bits/stdc++.h>
using namespace std;
//better approach followed here (using hash array , even better using hash map)
//optimal solution would be taking xor of all elements which directly gives answer
int appearingOnce(int arr[] ,int n){
    int maxi=arr[0];
    for(int i=1;i<n;i++){
        maxi=max(arr[i],maxi);
    }
    int hashArray[maxi]={0};
    for(int i=0;i<n;i++){
        hashArray[arr[i]]++;
    }
    for(int i=0;i<=maxi;i++){
        if(hashArray[i]==1){
            return i;
        }
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int once=appearingOnce(arr, n);
    cout<<once<<endl;
}