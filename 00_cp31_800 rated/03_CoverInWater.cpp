#include <bits/stdc++.h>
using namespace std;
int solve(int n,string& s){
    int countTotal=0;
    int countTogether=0;
    for(auto &it : s){
        if(it=='.'){
            countTotal++;
            countTogether++;
            if(countTogether>=3){
                return 2;
            }
        }
        else if(it=='#'){
            countTogether=0;
        }
    }
    return countTotal;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<solve(n,s)<<endl;
    }
}