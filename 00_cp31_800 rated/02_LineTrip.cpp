#include <bits/stdc++.h>
using namespace std;
int solve(int n,int x,vector<int>& stations){
    int minFuel=stations[0];
    for(int i=1;i<n;i++){
        minFuel=max(stations[i]-stations[i-1],minFuel);
    }
    minFuel=max(minFuel,2*(x-stations[n-1]));
    return minFuel;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>stations(n);
        for(auto &it : stations) cin>>it;
        cout<<solve(n,x,stations)<<endl;
    }
}
