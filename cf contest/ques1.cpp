#include <bits/stdc++.h>
using namespace std;

string solve(int m, int n){
    if(m==0){
        if(n%2==0){
            return "yes";
        }
        else return "no";
    }
    else if(n==0){
        if(m%2==0){
            return "yes";
        }
        else return "no";
    } 
    else if(m%2==0){
        return "yes";
    } 
    else if(m%2!=0){
        return "no";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        string ans=solve(m,n);
        cout<<ans<<endl;
    }
}