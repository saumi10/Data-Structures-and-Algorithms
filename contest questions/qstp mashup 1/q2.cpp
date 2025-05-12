#include <bits/stdc++.h>
using namespace std;
string mostCommon(int n, int k,int arr[]){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==k){
            return "YES";
        }
    }
    return "NO";
    
}



int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        string str=mostCommon(n,k,arr);
        cout<<str<<endl;
    }
}