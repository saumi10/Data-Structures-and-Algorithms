#include <bits/stdc++.h>
using namespace std;
//0 based indexing, but then need to take array input accordingly too
/*

int solve(int n, int l, int r,vector<int>& A){
    vector<int> prefix(n);
    prefix[0]=A[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+A[i];
    }
    int result=0;
    for(int j=l;j<=r;j++){
        result+=prefix[r]-prefix[j-1];
    }
    return result;
}
*/    

//1 based indexing, correct solution
/*
int solve(int n, int l, int r,vector<int>& A){
    vector<int> prefix(n+1,0);
    for(int i=1;i<=n;i++){
        prefix[i]=prefix[i-1]+A[i];
    }
    int result=0;
    for(int j=l;j<=r;j++){
        result+=prefix[r]-prefix[j-1];
    }
    return result;
}
*/
/* solution */
int solve(int n, int l, int r,vector<int>& A){
    vector<int> prefix1(n+1,0);
    vector<int> prefix2(n+1,0);
    for(int i=0;i<=n;i++){
        prefix1[i]=prefix1[i-1]+(i*A[i]);
        prefix2[i]=prefix2[i-1]+A[i];
    }
    return ((prefix1[r]-prefix1[l-1])-(l-1)*(prefix2[r]-prefix2[l-1]));
}


int main(){
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        int l,r;
        cin>>l>>r;
        vector<int> A(n+1);
        for(int i=1;i<=n;i++) cin>>A[i];
        cout<<solve(n,l,r,A)<<endl;

    }
}
