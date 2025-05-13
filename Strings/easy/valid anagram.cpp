#include <bits/stdc++.h>
using namespace std;

//Given two strings s and t,
// return true if t is an anagram of s, and false otherwise.
//An anagram is a word or phrase
// formed by rearranging the letters of a different word or phrase,
// using all the original letters exactly once.

//APROACH
//use unordered maps, to keep count and that each letter is used in t
//as many times as it appears in s
//no other letter should be used
//size of t and s should be same
//no letter should be used more times in t than it actually appeared in s
bool validAnagram(string s, string t)
{
    unordered_map<char,int> mpp;
        if(s.length()!=t.length()) return false;
        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }
        for(int j=0;j<t.length();j++){
            if(mpp[t[j]]==0){
                return false;
            }
            else{
                mpp[t[j]]--;
            }
        }
        return true;
}

int main()
{
    string s, t;
    cin >> s >> t;
    bool result = validAnagram(s, t);
    cout << result;
}