#include <bits/stdc++.h>
using namespace std;

string solve(int n){
        int c[4] = {0};
        for (int i = 0; i < n; ++i) {
            c[i % 4]++;
        }
        int pairs03 = min(c[0],c[3]);
        int pairs12 = min(c[1], c[2]);

        int total=2*(pairs03+pairs12);

        if (total == n)
            return "Bob";
        else
            return "Alice";
    }






    


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin >> n ;
        
        
        string ans=solve(n);
        cout<<ans<<endl;
    }
}