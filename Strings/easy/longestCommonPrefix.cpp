#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>&strs, int n){
    /* MY SOLUTION:
        Take first string ,
        compare with next character by caracter
        and keep updating temp

    string temp=strs[0];
    if(temp=="") return "";

    for(int i=1;i<n;i++){
        if(strs[i]==""){
            return "";
        }
        //traversing every character till length of the smaller string between temp and next string in the array
        for(int j=0;j<min(temp.length(), strs[i].length());j++){
            if(temp[j]!=strs[i][j]){
                if(j==0){
                    return "";
                }
                else{
                    temp=temp.substr(0,j);
                    break;
                }
            }
            
        }
        //updating temp if every character matches but the temp or string length gets over
        temp=temp.substr(0,min(temp.length(),strs[i].length()));
          
    }
    return temp;
    */

   //OPTIMAL SOLUTION :
   /*
    STEP1:Sort the array
    STEP2:Get the first and last string
    STEP3:compare character by character
    NOTE: While comparing , use a for loop that runs
    from i=0 till i<min(first.length(),last.length())
   */ 

    sort(strs.begin(),strs.end()); //STEP1 

    string first=strs[0]; //STEP2
    string last=strs[n-1];


    string temp=""; //STEP3
    for(int i=0;i<min(first.length(),last.length());i++){
        if(first[i]!=last[i]){
            break;
            return temp;
        }
        else{
            temp.push_back(first[i]);
        }
    }
    return temp;

}

int main(){
    int n;
    cin>>n;
    vector<string> strs(n);
    for (int i=0;i<n;i++){
        cin>>strs[i];
    }

    string result=longestCommonPrefix(strs,n);
    cout<<result;

}