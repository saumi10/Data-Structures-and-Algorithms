#include <bits/stdc++.h>
using namespace std;

string solve(string s,int n ){
   unordered_map<char,int>mpp;
   int count=0;
   for(int i=0;i<s.length();i++){
    mpp[s[i]]++;
    if(mpp[s[i]]>=2) count++;
   } 
   if(count>=2){
    return "yes";
   }
   else if(count==0){
    return "no";
   }
   else{
    if(s[0]==s[s.length()-1])
    return "No";
    else{
        return "yes";
    }
   }

    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans=solve(s,n);
        cout<<ans<<endl;
    }
}