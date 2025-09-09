#include <bits/stdc++.h>
using namespace std;

long long solve(long long a, long long b){

    long long ans=-1;
    vector<long long>divisors= {1,b};
    if (b%2==0) {
        divisors.push_back(2);
        divisors.push_back(b / 2);
    }

    for (long long k :divisors) {
        if (b%k==0) {
            long long A=a*k;
            long long B=b/k;
            long long sum=A+B;
            if (sum %2==0){
                ans= max(ans, sum);
            } 
        }
    }

    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b;
        long long ans;
        cin>>a>>b;
        ans=solve(a,b);
        cout<<ans<<endl;
    }
}