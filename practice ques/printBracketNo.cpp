#include<bits/stdc++.h>
using namespace std;

vector<int> bracketNumbers(string str) {
        //use stacks to solve
        vector<int>v;
        stack <int> st; 
        int j=1;
        for (int i=0;i<str.length();i++){
            if(str[i]=='('){
                st.push(j);
                v.push_back(j);
                j++;
            }
            else if(str[i]==')'){
               
                v.push_back(st.top());
                st.pop();
                
                    
            }
        }
        while (!st.empty()) {
            st.pop();
        }
        return v;
}

int main(){
    string str;
    getline(cin,str);

    vector<int> v=bracketNumbers(str);
    for(auto it:v){
        cout<<it<<" ";
    }

}