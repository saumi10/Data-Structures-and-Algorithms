#include <bits/stdc++.h>
using namespace std;


vector<int> intersectionArray(int arr1[], int arr2[],int n1, int n2){
    int i=0;
    int j=0;
    vector<int> intersecArr;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            intersecArr.push_back(arr1[i]);
            i++;
            j++;
        }

    }
    return intersecArr;
}

int main(){
    int n1,n2;
    cin >> n1 >> n2;
    int arr1[n1];
    int arr2[n2];
    
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    vector<int> intersecArr=intersectionArray(arr1, arr2, n1, n2);
    for(auto it:intersecArr){
        cout<<it<<" ";
    }




}