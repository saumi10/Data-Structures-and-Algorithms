#include <bits/stdc++.h>
using namespace std;
//only for lower case a-z

int main(){
    string str;
    cin>>str;

    //precomputation

    int hashArr[26]={0};
    for(int i=0;i<str.size();i++){
        hashArr[str[i]-'a']++;
    }

    int q;
    cin>>q;
    while(q--){
        char character;
        cin>>character;
        //fetch
        cout<<hashArr[character-'a']<<endl;
    }


}