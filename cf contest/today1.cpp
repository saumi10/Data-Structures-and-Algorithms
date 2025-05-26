#include <bits/stdc++.h>
using namespace std;

vector<int> solve(string s){
    
    
    string s1="";
    string s2="";
    for(int i=0;i<4;i++){
        if(i<2){
            s1+=s[i];
        }
        else{
            s2+=s[i];
        }
        
    }
    int x=stoi(s1);
    int y=stoi(s2);
    int strAns=(x+y)*(x+y);
    int str=stoi(s);
    int sqrootstr=sqrt(str);
    if(strAns==str){
        return {x,y};
    }
    else if(sqrootstr*sqrootstr==str){
        return {sqrootstr-1,1};
    }
    else{
        return {-1};
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int> ans=solve(s);
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}