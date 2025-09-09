#include <bits/stdc++.h>
using namespace std;
//printing sum of nos. from 1 to N by functional recursion way
int sum(int n){
    if(n==0){
        return 0;
    } 

    return n+sum(n-1);
}

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);

}

int main(){
    int n;
    cin>>n;
    int x=sum(n);
    int f=factorial(n);
    cout<<f;
}