#include <bits/stdc++.h>
using namespace std;
//printing sum of nos. from 1 to N by parameterised way
void f(int i, int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    } 

    f(i-1,sum+i);
}

int main(){
    int n;
    cin>>n;
    f(n,0);
}