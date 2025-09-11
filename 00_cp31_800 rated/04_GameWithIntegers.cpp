#include <bits/stdc++.h>
using namespace std;
string solve(int n){
    if(n%3==0){
        return "Second";
    }
    return "First";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
}