#include<bits/stdc++.h>
using namespace std;

int countDigits(int n) {
    //or directly
    // int cnt=(int)(log10(n)+1);
    //return cnt;
    //TC= O(log10(N)) -> If iterartions depend on division then log will come into picture , if divided by then log 2 , if 5 then log 5 , if 10 then log10
    int count = 0;
    while(n>0){
        count=count+1; 
        n=n/10;
    }
    cout<<count<<endl;
}


int main(){
    int n;
    cin>>n;
    countDigits(n);


    return 0;
}