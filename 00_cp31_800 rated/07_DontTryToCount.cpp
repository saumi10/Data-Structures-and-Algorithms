#include <bits/stdc++.h>
using namespace std;
int solve(int n,int m,string x,string s){
    if (x.find(s) != string::npos) return 0;
    int count = 0;
    // Try up to 6 doublings (safe because n*m ≤ 25)
    for (int ops = 1; ops <= 6; ops++) {
        x += x;  // double
        if (x.find(s) != string::npos) return ops;
    }
    return -1;
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        string x;
        cin>>x;
        string s;
        cin>>s;
        cout<<solve(n,m,x,s)<<endl;

    }
    
}