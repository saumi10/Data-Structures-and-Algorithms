#include <bits/stdc++.h>
using namespace std;
int solve(int n){
    int chick =2;
    int cow=4;
    int count=0;
    while(n>0){
        if(n>=4){
            n=n-4;
            count++;

        }
        else{
            n=n-2;
            count++;
        }
    }
    return count;
}

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        
        int sol = solve(n);
        cout << sol << endl;
    }
}