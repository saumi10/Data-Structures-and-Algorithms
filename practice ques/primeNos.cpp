#include<bits/stdc++.h>
using namespace std;
//print all prime numbers from 2 to n
int main(){
    
        int n=10;

        for (int i = 2; i <= n; i++) {
            bool isPrime = true;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                cout<<i<<endl;
                
            }
        }

}