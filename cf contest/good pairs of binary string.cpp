#include <bits/stdc++.h>
using namespace std;

string solve(string s,int n,int k){
    int countZero=0;
    int countOne=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            countZero++;
        }
        else{
            countOne++;
        }
    }
    if(countOne==countZero){
        return "YES";
    }
    if(countZero==0 || countOne==0){
        return "NO";
    }
    
    while(k>0){
        if(countOne>countZero){
            countOne-=2;
            if(countOne==countZero){
                return "YES";
            }
            k--;   

        }
        else{
            countZero-=2;
            if(countOne==countZero){
                return "YES";
            }
            k--;

        }
        return "NO";
    }
    

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        string ans=solve(s,n,k);
        cout<<ans;
        cout<<endl;
    }
}