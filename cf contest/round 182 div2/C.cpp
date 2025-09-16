#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;

int solve(int index, vector<int>& a, vector<int>& b, int n){
    if (index==n) return 1;
    int res = 0;

    if (index==0 || (a[index]>=a[index-1] && b[index]>=b[index-1])) {
        res = (res+solve(index+1,a,b,n))%MOD;
    }

    swap(a[index], b[index]);
    if (index==0 || (a[index]>=a[index-1] && b[index]>=b[index-1])) {
        res = (res +solve(index+1,a,b,n))%MOD;
    }
    swap(a[index],b[index]); 

    return res;

}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(auto &it : a) cin>>it;
        for(auto &it : b)cin>>it;
        int ans=solve(0,a,b,n);
        cout<<ans%998244353<<endl;
    }
}