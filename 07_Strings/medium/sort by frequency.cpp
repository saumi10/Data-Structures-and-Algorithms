#include <bits/stdc++.h>
using namespace std;

bool comp(pair<char,int>p1 ,pair<char,int>p2 ){
    return p1.second>p2.second;
}

string sortByFreq(string s){
     unordered_map<char,int> mpp;
        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }
    vector<pair<char,int>> p;
    for(auto it:mpp){
        p.push_back({it.first,it.second});
    }
    sort(p.begin(),p.end(),comp);
    string result="";
    for(auto it:p){
        
        for(int i=0;i<it.second;i++){
            result+=it.first;
        }
    }
    return result;

}

int main(){
    string s;
    cin>>s;
    string result=sortByFreq(s);
    cout<<result;
}