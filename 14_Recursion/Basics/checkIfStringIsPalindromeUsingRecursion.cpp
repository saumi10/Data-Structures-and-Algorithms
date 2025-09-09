#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(char arr[],int n, int i){
    if(i>=n/2){
        return true;
    }
    if(arr[i]!=arr[n-i-1]){
        return false;
    }

    return checkPalindrome(arr,n,i+1);
}

int main(){
    int n;
    cin>>n;

    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    checkPalindrome(arr,n,0);

    if(checkPalindrome(arr,n,0)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}

