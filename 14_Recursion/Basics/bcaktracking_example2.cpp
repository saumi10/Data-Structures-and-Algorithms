#include <bits/stdc++.h>
using namespace std;
//printing nos. from N to 1 but by backtracking
void print(int i, int n){
    if(i>n) return;

    print(i+1,n);
    cout<<i<<endl;
    

}

int main(){
    int n;
    cin>>n;
    print(1,n);
}