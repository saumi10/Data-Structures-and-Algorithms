#include <bits/stdc++.h>
using namespace std;
string solve(int n,vector<int>& arr){
    int countUnique=0;
    unordered_map<int,int>mpp;
    for(int i=0;i<arr.size();i++){
        if(mpp[arr[i]]==0){
            countUnique++;
            if(countUnique>2) return "NO";
        }
        mpp[arr[i]]++;    
    }
    if(countUnique==1) return "YES";
    int number1;
    int number2;
    for(auto &it : mpp){
        number1=it.second;
        break;
    }
    int count=1;
    for(auto &it : mpp){
        if(count==1){
            count++;
            continue;
        }
        number2=it.second;
        break;
    }
    if(n%2==0){
        if(number1==number2) return "YES";
        else return "NO";
    }
    else {
        if(number1==number2+1 || number2==number1+1) return "YES";
        else return "NO";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(auto &it : arr) cin>>it;
        cout<<solve(n,arr)<<endl;
    }
}