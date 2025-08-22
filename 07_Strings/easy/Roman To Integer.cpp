#include <bits/stdc++.h>
using namespace std;

//T.C=O(N)  , S.C=O(1) FOR BOTH BUT 2ND APPROACH IS A BIT FASTER
//SINCE NO HASHING, AND SWITCH CASE USE

/*int romanToInt(string s) {
        unordered_map<char,int> mpp;
        mpp['I']=1;
        mpp['V']=5;
        mpp['X']=10;
        mpp['L']=50;
        mpp['C']=100;
        mpp['D']=500;
        mpp['M']=1000;
        int temp=0;
        for(int i=s.length()-1;i>=0;i--){
           
            if(i<s.length()-1 && s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X')){
                temp-=mpp[s[i]];
            }
            else if(i<s.length()-1 && s[i]=='X' && (s[i+1]=='L' || s[i+1]=='C')){
                temp-=mpp[s[i]];
            }
            else if(i<s.length()-1 && s[i]=='C' && (s[i+1]=='D' || s[i+1]=='M')){
                temp-=mpp[s[i]];
            }
            else{
                 temp+=mpp[s[i]];
            }
        }
        mpp.clear();
        return temp;
    }*/
    int romanCharToInt(char c) {
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanToInt(string s) {
    int total = 0;
    int prev = 0;

    for(int i = s.length() - 1; i >= 0; i--) {
        int curr = romanCharToInt(s[i]);
        
        if(curr < prev)
            total -= curr;
        else
            total += curr;

        prev = curr;
    }

    return total;
}

int main(){
    string s;
    cin>>s;
    int result=romanToInt(s);
    cout<<result;
}