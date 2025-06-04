#include <bits/stdc++.h>
using namespace std;

 int characterReplacement(string s, int k) {
        int l=0,r=0,maxlen=0,maxfreq=0;
        unordered_map<int,int>hash;
        while(r<s.length()){
            hash[s[r]-'A']++;
            maxfreq=max(maxfreq,hash[s[r]-'A']);
            if((r-l+1)-maxfreq>k){
                hash[s[l]-'A']--;
                l++;
            }
            else{
                maxlen=max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
    }

int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    int ans=characterReplacement(s,k);
    cout<<ans;
}