#include <bits/stdc++.h>
using namespace std;

string reverseWordsInAString(string s){
    /*string temp="";
        int j=0;
        int spaceCount=0;
        for(int i=s.length()-1;i>=0;i--){
            
            if(i==0 && s[i]==' '){
                spaceCount++;
                continue;
            }
            else if(i==s.length()-1 && s[i]==' '){
                spaceCount++;
                continue;
            }
            else if(s[i]==' ' && (s[i-1]==' ' || s[i+1]==' ')){
                if(spaceCount==0) temp+=' ';
                spaceCount++;
                continue;
            }
            temp+=s[i];
            spaceCount=0;
            j++;
        }
            */
        /*
        USING STACK and no reverse function used
        stack<char> st;
        string temp2;
        for(int i=0;i<temp.length();i++){
            if(temp[i]!=' ' ) {
                st.push(temp[i]); 
            }    
            else{
                while(!st.empty()){
                    temp2.push_back(st.top());
                    st.pop();
                }
                if(i!=temp.length()-1){
                    temp2.push_back(' ');
                }
            }
        }
        while(!st.empty()){
            temp2.push_back(st.top());
            st.pop();
        }
        */

        /*without using stack but using reverse function
        int start = 0;
        for (int end = 0; end <= temp.length(); end++) {
            if (end == temp.length() || temp[end] == ' ') {
                reverse(temp.begin() + start, temp.begin() + end);
                start = end + 1;
            }
        }*/

        //ANOTHER complete WAY
        int n=s.length();
        string ans="";

        reverse(s.begin(),s.end()); //reversing og string

        for(int i=0;i<n;i++){
            string word="";
            //taking individual words
            while(i<n && s[i]!=' '){
                word+=s[i];
                i++;
            }
            //reversing individual words
            reverse(word.begin(),word.end());

            //removing extra spaces and adding the reversed indiviual word to ans
            if(word.length()>0){
                ans+=" " + word;
            }
            //returning ans string without the first space
            
        }
        return ans.substr(1);

}

int main(){
    
    
    string s;
    getline(cin,s);
   

    string result=reverseWordsInAString(s);
    cout<<result;

}